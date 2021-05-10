#include <gui/screen1_screen/Screen1View.hpp>
#include "button_vals.h"

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    valPicker1.setUp();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::updateGUI(buttons receivedButton)
{
    if (receivedButton != oldButton)
    {
        if (receivedButton == BUTTON_1)
        {
            valPicker1.moveCursorRight();
            oldButton = receivedButton;
        }
        else if (receivedButton == IDLE)
        {
            oldButton = IDLE;
        }
    }
}
