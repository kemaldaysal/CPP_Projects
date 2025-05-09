#include "API.h"

void process(Rectangle &r)
{
    int w = r.get_width();
    r.set_height(10);

    std::cout << "Expected area = " << (w*10) << ", got " << r.calculate_area() << std::endl;
}