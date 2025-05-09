#ifndef _FINAL_SPECIFIER_H_
#define _FINAL_SPECIFIER_H_

class Base final
{
public:
    virtual void do_a_back_flip();
};

// class B2 : public Base // Error a 'final' class type cannot be used as a base class
// {
// public:
//     virtual void test();
// };

// ----------------------------------------------------------

class A 
{
public:
    virtual void do_something();
};

class B : public A 
{
public:
    virtual void do_something() override final; // prevent further overriding
};

// class C : public B
// {
// public:
//     virtual void do_something() override; // ERROR
//     // cannot override 'final' function
// };

#endif
