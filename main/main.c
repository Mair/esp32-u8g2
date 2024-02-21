#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "u8g2_example.h"

void app_main(void)
{
    xTaskCreate(task_test_SSD1306_i2c, "task_test_SSD1306i2c", 1024 * 5, NULL, 10, NULL);
    // xTaskCreate(task_test_SSD1306, "task_test_SSD1306i2c", 1024 * 5, NULL, 10, NULL);
}
