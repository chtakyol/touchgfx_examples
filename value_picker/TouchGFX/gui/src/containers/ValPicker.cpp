#include <gui/containers/ValPicker.hpp>
#include <cmath>

ValPicker::ValPicker()
{

}

void ValPicker::initialize()
{
}

void ValPicker::setUp()
{
    for(int i = 0; i < numberOfWholeDigits; ++i)
    {
        wholeDigitElements[i].setupListElements();
        list.add(wholeDigitElements[i]);
    }

    list.add(dotElement[0]);

    for(int i = 0; i < numberOfFractionDigits; ++i)
    {
        fractionDigitElements[i].setupListElements();
        list.add(fractionDigitElements[i]);
    }

    if (selectedDigitsIndex < numberOfWholeDigits - 1)
    {
        wholeDigitElements[selectedDigitsIndex].indicateSelecetion();
    }
    else if (selectedDigitsIndex == numberOfWholeDigits - 1)
    {
        wholeDigitElements[selectedDigitsIndex].indicateSelecetion();
    }
    else
    {
        fractionDigitElements[selectedDigitsIndex - numberOfWholeDigits].indicateSelecetion();
    }    
}

void ValPicker::moveCursorRight()
{
    if(selectedDigitsIndex < numberOfWholeDigits - 1)
    {
        wholeDigitElements[selectedDigitsIndex].indicateDeselecetion();
        selectedDigitsIndex++;
        wholeDigitElements[selectedDigitsIndex].indicateSelecetion();
    }
    else if (selectedDigitsIndex == numberOfWholeDigits - 1)
    {
        wholeDigitElements[selectedDigitsIndex].indicateDeselecetion();
        selectedDigitsIndex++;
        fractionDigitElements[selectedDigitsIndex - numberOfWholeDigits].indicateSelecetion();
    }
    else if (selectedDigitsIndex > numberOfWholeDigits - 1)
    {
        fractionDigitElements[selectedDigitsIndex - numberOfWholeDigits].indicateDeselecetion();
        selectedDigitsIndex++;
        fractionDigitElements[selectedDigitsIndex - numberOfWholeDigits].indicateSelecetion();
    }
}

void ValPicker::moveCursorLeft()
{
    if (selectedDigitsIndex > 0 && selectedDigitsIndex < numberOfWholeDigits)
    {
        wholeDigitElements[selectedDigitsIndex].indicateDeselecetion();
        selectedDigitsIndex--;
        wholeDigitElements[selectedDigitsIndex].indicateSelecetion();
    }
    else if (selectedDigitsIndex == numberOfWholeDigits)
    {
        fractionDigitElements[0].indicateDeselecetion();
        selectedDigitsIndex--;
        wholeDigitElements[selectedDigitsIndex].indicateSelecetion();
    }
    else if (selectedDigitsIndex > numberOfWholeDigits - 1)
    {
        fractionDigitElements[selectedDigitsIndex - numberOfWholeDigits].indicateDeselecetion();
        selectedDigitsIndex--;
        fractionDigitElements[selectedDigitsIndex - numberOfWholeDigits].indicateSelecetion();
    }
}

void ValPicker::increaseValue()
{
    if (selectedDigitsIndex < numberOfWholeDigits)
    {
        wholeDigitElements[selectedDigitsIndex].increase();
    }
    else
    {
        fractionDigitElements[selectedDigitsIndex - numberOfWholeDigits].increase();
    }
}

void ValPicker::decreaseValue()
{
    if (selectedDigitsIndex < numberOfWholeDigits)
    {
        wholeDigitElements[selectedDigitsIndex].decrease();
    }
    else
    {
        fractionDigitElements[selectedDigitsIndex - numberOfWholeDigits].decrease();
    }
}

int ValPicker::getWholeValue()
{
    int size = sizeof(wholeDigitElements) / sizeof(wholeDigitElements[0]);
    for (int i = 0; i < size; ++i)
    {
        wholeValue += wholeDigitElements[i].getValue() * (int)pow(10, (size - i));
    }
    return wholeValue;
}

int ValPicker::getFractionValue()
{
    int size = sizeof(fractionDigitElements) / sizeof(fractionDigitElements[0]);
    for (int i = 0; i < size; ++i)
    {
        // fractionValue += fractionDigitElements[i].getValue() * (int)pow(10, (size - 1));
    }
    return fractionValue;
}