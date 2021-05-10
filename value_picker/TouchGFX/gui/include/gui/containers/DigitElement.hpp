#ifndef DIGITELEMENT_HPP
#define DIGITELEMENT_HPP

#include <gui_generated/containers/DigitElementBase.hpp>
#include <touchgfx/Color.hpp>

class DigitElement : public DigitElementBase
{
public:
    DigitElement();
    virtual ~DigitElement() {}

    void setupListElements();
    void indicateSelecetion();
    void indicateDeselecetion();
    void increase();
    void decrease();
    int getValue();
protected:
    int value = 0;
    colortype defaultColor;
    colortype selectionColor;    
};

#endif // DIGITELEMENT_HPP
