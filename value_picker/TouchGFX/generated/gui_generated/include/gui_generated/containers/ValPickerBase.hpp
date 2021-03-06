/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef VALPICKERBASE_HPP
#define VALPICKERBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/ListLayout.hpp>

class ValPickerBase : public touchgfx::Container
{
public:
    ValPickerBase();
    virtual ~ValPickerBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box bg;
    touchgfx::ListLayout list;

private:

};

#endif // VALPICKERBASE_HPP
