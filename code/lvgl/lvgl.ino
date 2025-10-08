#include <lvgl.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <Wire.h>
#include "ui.h"    // ✅ adjust path if needed

// ----------------------
// DISPLAY PIN SETTINGS
// ----------------------
#define TFT_CS   10
#define TFT_DC    9
#define TFT_RST   8

// ----------------------
// TOUCH (CST328) SETTINGS
// ----------------------
#define TOUCH_I2C_ADDR 0x38
#define I2C_SDA  38
#define I2C_SCL  39

// ----------------------
// DISPLAY DRIVER
// ----------------------
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

// LVGL draw buffer
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[240 * 10];  // buffer for 10 lines

// ----------------------
// TOUCH READ FUNCTION
// ----------------------
void cst328_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  Wire.beginTransmission(TOUCH_I2C_ADDR);
  Wire.write(0x02);
  Wire.endTransmission();
  Wire.requestFrom(TOUCH_I2C_ADDR, (uint8_t)5);

  if (Wire.available() < 5) {
    data->state = LV_INDEV_STATE_REL;
    return;
  }

  Wire.read(); // dummy
  uint8_t touchPoints = Wire.read();
  if (touchPoints == 0) {
    data->state = LV_INDEV_STATE_REL;
    return;
  }

  uint16_t x = ((Wire.read() & 0x0F) << 8) | Wire.read();
  uint16_t y = ((Wire.read() & 0x0F) << 8) | Wire.read();

  data->state = LV_INDEV_STATE_PR;
  data->point.x = x;
  data->point.y = y;
}

// ----------------------
// LVGL DISPLAY FLUSH
// ----------------------
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  int32_t x1 = area->x1;
  int32_t y1 = area->y1;
  int32_t x2 = area->x2;
  int32_t y2 = area->y2;

  tft.startWrite();
  tft.setAddrWindow(x1, y1, (x2 - x1 + 1), (y2 - y1 + 1));

  for (int y = y1; y <= y2; y++) {
    for (int x = x1; x <= x2; x++) {
      lv_color_t pixel = *color_p++;
      uint16_t c = ((pixel.ch.red & 0xF8) << 8) |
                   ((pixel.ch.green & 0xFC) << 3) |
                   (pixel.ch.blue >> 3);
      tft.pushColor(c);
    }
  }

  tft.endWrite();
  lv_disp_flush_ready(disp);
}

// ----------------------
// SETUP
// ----------------------
void setup() {
  Serial.begin(115200);
  Wire.begin(I2C_SDA, I2C_SCL);
  tft.begin();
  tft.setRotation(1);

  lv_init();

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, 240 * 10);

  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = 320;
  disp_drv.ver_res = 240;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = cst328_read;
  lv_indev_drv_register(&indev_drv);

  // Load your SquareLine UI
  ui_init();
  Serial.println("LVGL UI started successfully ✅");
}

// ----------------------
// LOOP
// ----------------------
void loop() {
  lv_timer_handler();
  delay(5);
}
