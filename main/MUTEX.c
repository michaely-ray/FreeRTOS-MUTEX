#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

int count = 0;
SemaphoreHandle_t mcounter;

void task1(void *params)
{
  while (true)
  { 
    if (xSemaphoreTake(mcounter, 1000 / portTICK_PERIOD_MS)){
      printf("COUNT1: %d \n\n", count);
      count++;
      vTaskDelay(10/ portTICK_PERIOD_MS);
      xSemaphoreGive(mcounter);
  }
  }
}

void task2(void *params)
{
  while (true)
  { if (xSemaphoreTake(mcounter, 1000 / portTICK_PERIOD_MS)){
      printf("COUNT2: %d \n\n", count);
      count++;
      vTaskDelay(2/ portTICK_PERIOD_MS);
      xSemaphoreGive(mcounter);
  }
  }
}

void task3(void *params)
{
  while (true)
  { if (xSemaphoreTake(mcounter, 1000 / portTICK_PERIOD_MS)){
      printf("COUNT3: %d \n\n", count);
      count++;
      vTaskDelay(5/ portTICK_PERIOD_MS);
      xSemaphoreGive(mcounter);
  }
  }
}

void task4(void *params)
{
  while (true)
  { if (xSemaphoreTake(mcounter, 1000 / portTICK_PERIOD_MS)){
      printf("COUNT4: %d \n\n", count);
      count++;
      vTaskDelay(10/ portTICK_PERIOD_MS);
      xSemaphoreGive(mcounter);
  }
  }
}

void task5(void *params)
{
  while (true)
  { if (xSemaphoreTake(mcounter, 1000 / portTICK_PERIOD_MS)){
      printf("COUNT5: %d \n\n", count);
      count++;
      vTaskDelay(2/ portTICK_PERIOD_MS);
      xSemaphoreGive(mcounter);
  }
  }
}

void task6(void *params)
{
  while (true)
  { if (xSemaphoreTake(mcounter, 1000 / portTICK_PERIOD_MS)){
      printf("COUNT6: %d \n\n", count);
      count++;
      vTaskDelay(5/ portTICK_PERIOD_MS);
      xSemaphoreGive(mcounter);
  }
  }
}
void app_main(void)
{
  mcounter = xSemaphoreCreateMutex();
  xTaskCreate(&task1, "COUNTER 1", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task2, "COUNTER 2", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task3, "COUNTER 3", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task4, "COUNTER 4", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task5, "COUNTER 5", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task6, "COUNTER 6", 2048, NULL, configMAX_PRIORITIES-1, NULL);
}
