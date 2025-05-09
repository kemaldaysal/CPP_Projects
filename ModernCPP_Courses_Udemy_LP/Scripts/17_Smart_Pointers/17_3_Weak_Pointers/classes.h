#ifndef _CLASSES_H_
#define _CLASSES_H_

#include <memory>
#include <iostream>

class B; // forward declaration (prototype) to use shared_ptr to B in A  

class A
{
private:
    std::shared_ptr<B> b_ptr;
public:
    void set_B_part_of_A(std::shared_ptr<B> &new_b);
    A();
    ~A();
};

class B
{
private:    
    // std::shared_ptr<A> a_ptr; // make this weak to break the strong circular reference
    std::weak_ptr<A> a_ptr; // make this weak to break the strong circular reference

public:
    void set_A_part_of_B(std::shared_ptr<A> &new_a); // this doesn't change
    B();
    ~B();
};

#endif