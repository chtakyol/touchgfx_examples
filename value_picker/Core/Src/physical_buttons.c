#include "main.h"
#include "physical_buttons.h"
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"
#include "button_vals.h"

enum buttons btn;

extern xQueueHandle messageQ;

void pButtonsInit()
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_SET);
}

void pButtonsRoutine()
{
    if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)
    {
        btn = BUTTON_1;
        xQueueSend(messageQ, &btn, 0);
        return;
    }

    btn = IDLE;
	xQueueSend(messageQ, &btn, 0);
	return;
}
