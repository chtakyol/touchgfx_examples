/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>

Screen1ViewBase::Screen1ViewBase()
{

    bg.setPosition(0, 0, 240, 320);
    bg.setColor(touchgfx::Color::getColorFrom24BitRGB(206, 203, 230));

    list.setDirection(touchgfx::SOUTH);
    list.setPosition(0, 0, 250, 250);

    add(bg);
    add(list);
}

void Screen1ViewBase::setupScreen()
{

}
