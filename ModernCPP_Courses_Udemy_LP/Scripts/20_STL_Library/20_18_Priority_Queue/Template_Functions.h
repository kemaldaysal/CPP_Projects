#ifndef _TEMPLATE_FUNCTIONS_H_
#define _TEMPLATE_FUNCTIONS_H_

#include <iostream>
#include <queue>

// This displays the priority queue by
// repeatedly topping and popping the priority queue
// It is being passed by value so we don't modify the
// priority queue being passed in

template <typename T>
void display(std::priority_queue<T> pq)
{
    std::cout << "[ ";
    while (!pq.empty())
    {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << "]" << std::endl;
}

#endif