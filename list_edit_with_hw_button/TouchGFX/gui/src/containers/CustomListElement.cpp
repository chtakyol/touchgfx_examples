#include <gui/containers/CustomListElement.hpp>

CustomListElement::CustomListElement() : viewCallback(0)
{

}

void CustomListElement::setupListElements(TEXTS textID)
{
    text.setTypedText(TypedText(textID));
    text.resizeToCurrentText();
    text.invalidate();
}

void CustomListElement::setAction(GenericCallback <CustomListElement&>& callback)
{
    viewCallback = &callback;
}
