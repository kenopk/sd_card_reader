#include "esp_log.h"   // подключаем систему логов ESP-IDF

static const char *TAG = "sd";   // метка, которая будет у каждого нашего сообщения

extern "C" void app_main(void)
{
    ESP_LOGI(TAG, "Привет! Плата работает.");
}
