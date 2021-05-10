#ifndef DOTELEMENT_HPP
#define DOTELEMENT_HPP

#include <gui_generated/containers/DotElementBase.hpp>

class DotElement : public DotElementBase
{
public:
    DotElement();
    virtual ~DotElement() {}

    virtual void initialize();
protected:
};

#endif // DOTELEMENT_HPP
