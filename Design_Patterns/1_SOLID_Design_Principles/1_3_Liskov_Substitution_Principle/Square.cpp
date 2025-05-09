#include "Square.h"

Square::Square(int length_of_edge)
    : Rectangle(length_of_edge, length_of_edge) {}

void Square::set_width(int width)
{
    this->width = this->height = width;
}
void Square::set_height(int height)
{
    this->width = this->height = height;
}