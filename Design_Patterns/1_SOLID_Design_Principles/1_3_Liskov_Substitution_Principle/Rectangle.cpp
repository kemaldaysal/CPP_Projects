#include "Rectangle.h"

Rectangle::Rectangle(int width, int height)
    : width{width}, height{height} {}

int Rectangle::get_width() const
{
    return width;
}

int Rectangle::get_height() const
{
    return height;
}

void Rectangle::set_width(int width)
{
    Rectangle::width = width;
}

void Rectangle::set_height(int height)
{
    Rectangle::height = height;
}

int Rectangle::calculate_area() const
{
    return (width*height);
}

