#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View() : listElementClickedCallback(this, &Screen1View::listElementClicked)
{

}

void Screen1View::setupScreen()
{
    listElements[0].setupListElement(T_LIST_ELEMENT_00);
    listElements[1].setupListElement(T_LIST_ELEMENT_01);
    listElements[2].setupListElement(T_LIST_ELEMENT_02);
    listElements[3].setupListElement(T_LIST_ELEMENT_03);
    listElements[4].setupListElement(T_LIST_ELEMENT_04);
    listElements[5].setupListElement(T_LIST_ELEMENT_05);
    listElements[6].setupListElement(T_LIST_ELEMENT_06);

    for (uint8_t i = 0; i < numberOfListElements; ++i)
    {
        listElements[i].setAction(listElementClickedCallback);
        listLayout1.add(listElements[i]);
    }

    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::buttonClicked()
{
    presenter->sendData(10);
    listElementClicked(listElements[2]);
}

void Screen1View::listElementClicked(CustomContainer1& element)
{
    listLayout1.remove(element);
    listLayout1.invalidate();
}
