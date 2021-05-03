#ifndef CUSTOMLISTELEMENT_HPP
#define CUSTOMLISTELEMENT_HPP

#include <gui_generated/containers/CustomListElementBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

class CustomListElement : public CustomListElementBase
{
public:
    CustomListElement();
    virtual ~CustomListElement() {}

    void setupListElements(TEXTS textID);
    void setAction(GenericCallback<CustomListElement&>& callback);
protected:
    GenericCallback<CustomListElement&>* viewCallback;
};

#endif // CUSTOMLISTELEMENT_HPP
