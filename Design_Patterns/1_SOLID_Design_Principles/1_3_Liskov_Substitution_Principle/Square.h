#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "Rectangle.h"

class Square : public Rectangle
{
public:
    Square(int length_of_edge);

    virtual void set_width(int width) override;
    virtual void set_height(int height) override;
};

#endif