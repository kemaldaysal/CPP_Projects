#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <iostream>

class Rectangle
{
protected:
    int width;
    int height;

public:
    Rectangle(int width, int height);
    int get_width() const;
    int get_height() const;

    virtual void set_width(int width);
    virtual void set_height(int height);

    int calculate_area() const;
};

#endif