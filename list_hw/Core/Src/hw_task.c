#include "main.h"
#include "hw_task.h"
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

int buffer;
extern xQueueHandle messageFromGUI;

void hwInit()
{
    messageFromGUI = xQueueGenericCreate(1, 1, 0);
}

void hwRoutine()
{


    if (xQueueReceive(messageFromGUI, &buffer, 0) == pdTRUE)
    {
        HAL_GPIO_TogglePin(GPIOG, GPIO_PIN_13);
    }
	return;
}
