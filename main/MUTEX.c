#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

int count = 0;

void task1(void *params)
{
  while (true)
  {
    printf("COUNT: %d \n\n", count);
    count++;
    vTaskDelay(10/ portTICK_PERIOD_MS);
  }
}

void task2(void *params)
{
  while (true)
  {   
    printf("COUNT: %d \n\n", count);
    count++;
    vTaskDelay(2/ portTICK_PERIOD_MS);
   
  }
}

void task3(void *params)
{
  while (true)
  {   
    printf("COUNT: %d \n\n", count);
    count++;
    vTaskDelay(5/ portTICK_PERIOD_MS);
    
  }
}

void task4(void *params)
{
  while (true)
  {
    printf("COUNT: %d \n\n", count);
    count++;
    vTaskDelay(10/ portTICK_PERIOD_MS);
  }
}

void task5(void *params)
{
  while (true)
  {   
    printf("COUNT: %d \n\n", count);
    count++;
    vTaskDelay(2/ portTICK_PERIOD_MS);
   
  }
}

void task6(void *params)
{
  while (true)
  {   
    printf("COUNT: %d \n\n", count);
    count++;
    vTaskDelay(5/ portTICK_PERIOD_MS);
    
  }
}
void app_main(void)
{
  xTaskCreate(&task1, "COUNTER 1", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task2, "COUNTER 2", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task3, "COUNTER 3", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task4, "COUNTER 4", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task5, "COUNTER 5", 2048, NULL, configMAX_PRIORITIES-1, NULL);
  xTaskCreate(&task6, "COUNTER 6", 2048, NULL, configMAX_PRIORITIES-1, NULL);
}
