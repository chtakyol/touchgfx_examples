/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CUSTOMLISTELEMENTBASE_HPP
#define CUSTOMLISTELEMENTBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class CustomListElementBase : public touchgfx::Container
{
public:
    CustomListElementBase();
    virtual ~CustomListElementBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box listElementBackground;
    touchgfx::TextArea text;

private:

};

#endif // CUSTOMLISTELEMENTBASE_HPP