#include "classes.h"
#include <iostream>

int main()
{
    std::shared_ptr<A> a{std::make_shared<A>()};
    std::shared_ptr<B> b{std::make_shared<B>()};
    a->set_B_part_of_A(b);
    b->set_A_part_of_B(a);

    return 0;
}