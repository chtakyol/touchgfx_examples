#include <gui/containers/CustomContainer1.hpp>

CustomContainer1::CustomContainer1() : viewCallback(0)
{

}

void CustomContainer1::setupListElement(TEXTS textID)
{
    textArea1.setTypedText(TypedText(textID));
    textArea1.resizeToCurrentText();
    textArea1.invalidate();
}

void CustomContainer1::setAction(GenericCallback<CustomContainer1&>& callback)
{
    viewCallback = &callback;
}