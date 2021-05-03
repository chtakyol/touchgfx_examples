#include <gui/screen1_screen/Screen1View.hpp>
#include "button_vals.h"

Screen1View::Screen1View() : listElementClickedCallback(this, &Screen1View::listElementClicked)
{

}

void Screen1View::setupScreen()
{
    listElements[0].setupListElements(T_LIST_ELEMENT_00);
    listElements[1].setupListElements(T_LIST_ELEMENT_01);
    listElements[2].setupListElements(T_LIST_ELEMENT_02);
    listElements[3].setupListElements(T_LIST_ELEMENT_03);
    for (uint8_t i = 0; i < numberOfElemenents; ++i)
    {
        listElements[i].setAction(listElementClickedCallback);
        list.add(listElements[i]);
    }
    list.invalidate();
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::updateGUI(buttons receivedButton)
{
    if (receivedButton == BUTTON_1)
    {
        listElementClicked(listElements[2]);
    }
}

void Screen1View::listElementClicked(CustomListElement& element)
{
    list.remove(element);
    list.invalidate();
}
