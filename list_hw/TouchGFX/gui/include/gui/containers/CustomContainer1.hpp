#ifndef CUSTOMCONTAINER1_HPP
#define CUSTOMCONTAINER1_HPP

#include <gui_generated/containers/CustomContainer1Base.hpp>
#include <texts/TextKeysAndLanguages.hpp>

class CustomContainer1 : public CustomContainer1Base
{
public:
    CustomContainer1();
    virtual ~CustomContainer1() {}
    void setupListElement(TEXTS textID);
    void setAction(GenericCallback<CustomContainer1&>& callback);
protected:
    GenericCallback <CustomContainer1&>* viewCallback;
};

#endif // CUSTOMCONTAINER1_HPP
