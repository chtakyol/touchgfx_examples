#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"
#include "button_vals.h"

extern "C"
{
    xQueueHandle messageQ;
}

enum buttons receivedButton;

Model::Model() : modelListener(0)
{
    messageQ = xQueueGenericCreate(1, 1, 0);
}

void Model::tick()
{
	if(xQueueReceive(messageQ, &receivedButton, 0) == pdTRUE)
	{
		modelListener->getButton(receivedButton);
	}
}
