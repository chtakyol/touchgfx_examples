/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/CustomContainer1Base.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

CustomContainer1Base::CustomContainer1Base()
{
    setWidth(240);
    setHeight(25);
    box1.setPosition(0, 0, 240, 25);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    textArea1.setXY(48, 0);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_LIST_ELEMENT_00));

    add(box1);
    add(textArea1);
}

void CustomContainer1Base::initialize()
{

}
