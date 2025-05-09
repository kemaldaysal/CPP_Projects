#include "classes.h"

void A::set_B_part_of_A(std::shared_ptr<B> &new_b) { b_ptr = new_b; }

A::A() { std::cout << "A Constructor" << std::endl; }

A::~A() { std::cout << "A Destructor" << std::endl; }

void B::set_A_part_of_B(std::shared_ptr<A> &new_a) { a_ptr = new_a; } // this doesn't change

B::B() { std::cout << "B Constructor" << std::endl; }

B::~B() { std::cout << "B Destructor" << std::endl; }