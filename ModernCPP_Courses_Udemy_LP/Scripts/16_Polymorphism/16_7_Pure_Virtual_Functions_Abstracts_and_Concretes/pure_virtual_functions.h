#ifndef _PURE_VIRTUAL_FUNCTIONS_H_
#define _PURE_VIRTUAL_FUNCTIONS_H_

#include <iostream>
#include <vector>

// ----------------Main Abstract Class below

class Shape // Abstract base class
{
private:
    // Attributes common to all shapes
public:
    virtual void draw() = 0;   // pure virtual function
    virtual void rotate() = 0; // pure virtual function
    virtual ~Shape();
};

// ----------------Abstract Classes below

class Open_Shape : public Shape // Abstract class
{
public:
    virtual ~Open_Shape();
};


class Closed_Shape : public Shape // Abstract class
{
public:
    virtual ~Closed_Shape();
};

// ---------------Concrete Classes below

class Line : public Open_Shape // Concrete Class
{
public:
    virtual void draw() override; // overridden pure virtual function here (1/2)
    virtual void rotate() override; // overridden pure virtual function here (2/2)
    // all pure virtual functions overridden above, now this class became a concrete class.
    virtual ~Line();
};

class Circle : public Closed_Shape
{
public:    
    virtual void draw() override;
    virtual void rotate() override;
    virtual ~Circle();
};

class Square : public Closed_Shape
{
public:
    virtual void draw() override;
    virtual void rotate() override;
    virtual ~Square();
};

void screen_refresh(const std::vector<Shape*> &shapes);

#endif