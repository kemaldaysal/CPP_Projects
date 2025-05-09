#include "pure_virtual_functions.h"

void Line::draw()
{
    std::cout << "Drawing a line" << std::endl;
}

void Line::rotate()
{
    std::cout << "Rotating a line" << std::endl;
}

void Circle::draw()
{
    std::cout << "Drawing a circle" << std::endl;
}

void Circle::rotate()
{
    std::cout << "Rotating a circle" << std::endl;
}

void Square::draw()
{
    std::cout << "Drawing a square" << std::endl;
}

void Square::rotate()
{
    std::cout << "Rotating a square" << std::endl;
}

Shape::~Shape() {}
Open_Shape::~Open_Shape() {}
Closed_Shape::~Closed_Shape() {}
Line::~Line() {}
Circle::~Circle() {}
Square::~Square() {}

void screen_refresh(const std::vector <Shape *> &shapes)
{
    std::cout << "Refreshing" << std::endl;
    for (const auto p : shapes)
    {
        p->draw();
    }
}
