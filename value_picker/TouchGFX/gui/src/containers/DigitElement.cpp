#include <gui/containers/DigitElement.hpp>
#include <touchgfx/Color.hpp>

DigitElement::DigitElement()
{

}

void DigitElement::setupListElements()
{
    Unicode::snprintf(textBuffer, TEXT_SIZE, "%d", value);
    defaultColor = bg.getColor();
    selectionColor = touchgfx::Color::getColorFrom24BitRGB(225, 112, 26);
}

void DigitElement::indicateSelecetion()
{
    bg.setColor(selectionColor);
    bg.invalidate();
}

void DigitElement::indicateDeselecetion()
{
    bg.setColor(defaultColor);
    bg.invalidate();
}

void DigitElement::increase()
{
    if (value < 9)
    {
        value++;
    }
    else
    {
        value = 0;
    }
    Unicode::snprintf(textBuffer, TEXT_SIZE, "%d", value);
    text.invalidate();
}

void DigitElement::decrease()
{
    if (value > 0)
    {
        value--;
    }
    else
    {
        value = 9;
    }
    Unicode::snprintf(textBuffer, TEXT_SIZE, "%d", value);
    text.invalidate();
}

int DigitElement::getValue()
{
    return value;
}
