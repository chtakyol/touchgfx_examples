#include <gui/screen1_screen/Screen1View.hpp>
#include "button_vals.h"

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    box1.setVisible(false);
    box2.setVisible(false);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::updateGUI(buttons receivedButton)
{
    if (receivedButton == BUTTON_1)
    {
        box1.setVisible(true);
        box1.invalidate();
        box2.setVisible(true);
        box2.invalidate();
    }
}
