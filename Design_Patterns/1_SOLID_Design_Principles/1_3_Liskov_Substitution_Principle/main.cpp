#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "API.h"

int main()
{
    Rectangle r{3,4};
    process(r);
    // Output: Expected area = 30, got 30

    Square s{5};
    process(s);
    // Output: Expected area = 50 (!! wrong), got 100 (since height is set to 10 inside the function, not 5 anymore)


    return 0;
}