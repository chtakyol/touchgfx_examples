#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

extern "C"
{
    xQueueHandle messageFromGUI;
}

Model::Model() : modelListener(0)
{
    messageFromGUI = xQueueGenericCreate(1, 1, 0);
}

void Model::tick()
{
}

void Model::sendData(int data){
    xQueueSend(messageFromGUI, &data, 0);
}