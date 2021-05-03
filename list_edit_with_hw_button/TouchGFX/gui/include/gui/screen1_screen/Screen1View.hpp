#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <gui/containers/CustomListElement.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateGUI(buttons receivedButton);
    void listElementClicked(CustomListElement& element);
protected:
    static const int numberOfElemenents = 4;
    CustomListElement listElements[numberOfElemenents];
    Callback<Screen1View, CustomListElement&> listElementClickedCallback;
};

#endif // SCREEN1VIEW_HPP
