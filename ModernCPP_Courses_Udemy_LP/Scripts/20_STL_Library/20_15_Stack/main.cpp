#include <iostream>
#include <stack>
#include <vector>
#include <list>

// Since iterators aren't supported, displaying elements is harder
// This function displays a stack of
// by repeatedly topping and popping the stack
// Note that the stack is passed in value, not by reference.
// So we don't affect the passed in stack.
template <typename T>
void display(std::stack<T> s);

int main() // push, pop, empty, top
{
    std::stack<int> s; // defaults to deque
    std::stack<int, std::vector<int>> s1;
    std::stack<int, std::list<int>> s2;
    std::stack<int, std::deque<int>> s3; 

    for (int i: {1, 2, 3, 4, 5})
    {
        s.push(i);
    }
    display(s); // [ 5 4 3 2 1 ] // Remember, LIFO !!

    s.push(100);
    display(s); // [ 100 5 4 3 2 1 ]

    s.pop(); 
    s.pop();
    display(s); // [ 4 3 2 1 ]
    
    while (!s.empty())
        s.pop(); // there's no .clear method for stack
    display(s); // [ ]
    
    std::cout << "Size: " << s.size() << std::endl; // 0
    
    s.push(10); 
    display(s); // [ 10 ]
    
    s.top() = 100;
    display(s); // [ 100 ]

    return 0;
}

template <typename T>
void display(std::stack<T> s)
{
    std::cout << "[ ";

    while (!(s.empty()))
    {
        std::cout << s.top() << " ";
        s.pop();
    }

    std::cout << "]" << std::endl;
}