#include "pure_virtual_functions.h"
#include <vector>

int main()
{

    /*
    Shape s; // ERROR, cannot instantiate objects from abstract classes

    Shape *p = new Shape; // ERROR, cannot instantiate objects from abstract classes
    delete p;

    Open_Shape os; // ERROR, cannot instantiate objects from abstract classes
    */

    Circle c;
    c.draw(); // Drawing a circle

    Shape *ptr = new Circle();
    ptr->draw();   // drawing a circle // Dynamic polymorphism, runtime bind
    ptr->rotate(); // rotating a circle // ""
    delete ptr;

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes{s1, s2, s3};

    // for (const auto p : shapes)
    // {
    //     p->draw(); 
    // }
    // Drawing a circle
    // Drawing a line
    // Drawing a square

    screen_refresh(shapes);
    // Drawing a circle
    // Drawing a line
    // Drawing a square

    delete s1;
    delete s2;
    delete s3;

    return 0;
}