#ifndef VALPICKER_HPP
#define VALPICKER_HPP

#include <gui_generated/containers/ValPickerBase.hpp>
#include <gui/containers/DigitElement.hpp>
#include <gui/containers/DotElement.hpp>

class ValPicker : public ValPickerBase
{
public:
    ValPicker();
    virtual ~ValPicker() {}

    virtual void initialize();
    void setUp();
    void moveCursorRight();
    void moveCursorLeft();
    void increaseValue();
    void decreaseValue();
    int getWholeValue();
    int getFractionValue();

protected:
    int selectedDigitsIndex = 3;
    static const int numberOfWholeDigits = 6;
    static const int numberOfFractionDigits = 3;

    DigitElement wholeDigitElements[numberOfWholeDigits];
    DotElement dotElement[1];
    DigitElement fractionDigitElements[numberOfFractionDigits];

    int wholeValue = 0, fractionValue = 0;
};

#endif // VALPICKER_HPP
