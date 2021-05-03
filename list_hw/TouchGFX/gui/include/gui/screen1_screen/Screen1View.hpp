#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <gui/containers/CustomContainer1.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void buttonClicked();

    void listElementClicked(CustomContainer1& element);
protected:
    static const int numberOfListElements = 7;
    CustomContainer1 listElements[numberOfListElements];
    Callback<Screen1View, CustomContainer1&> listElementClickedCallback;
};

#endif // SCREEN1VIEW_HPP
