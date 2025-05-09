#ifndef _RECTANGLE_FACTORY_H_
#define _RECTANGLE_FACTORY_H_

#include "Rectangle.h"
#include "Square.h"

struct Rectangle_Factory
{
    static Rectangle create_rectangle(int w, int h);
    static Rectangle create_square(int size);

};


#endif