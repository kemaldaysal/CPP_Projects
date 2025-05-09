// Section 20
// Queue
#include <iostream>
#include <queue>

// This function displays a queue of
// by repeatedly removing elements from the front
// Note theat the queue is passed in by value so we
// don't affect the passed in queue.

template <typename T>
void display(std::queue<T> q);

int main() // push, pop, front, back, empty
{
    std::queue<int> q;

    for (int i : {1, 2, 3, 4, 5})
        q.push(i);
    display(q); // [ 1 2 3 4 5 ]
    std::cout << "Front: " << q.front() << std::endl; // 1
    std::cout << "Back:  " << q.back() << std::endl; // 5

    q.push(100); 
    display(q); // [ 1 2 3 4 5 100 ]

    q.pop();
    q.pop();
    display(q); // [ 3 4 5 100 ]

    while (!q.empty())
        q.pop();
    display(q); // [ ]

    std::cout << "Size: " << q.size() << std::endl; // 0

    q.push(10); 
    q.push(100);
    q.push(1000);
    display(q); // [ 10 100 1000 ]

    std::cout << "Front: " << q.front() << std::endl; // 10
    std::cout << "Back:  " << q.back() << std::endl; // 1000

    q.front() = 5;
    q.back() = 5000; 

    display(q); // [ 5 100 5000 ]
    std::cout << "Front: " << q.front() << std::endl; // 5
    std::cout << "Back:  " << q.back() << std::endl; // 5000

    return 0;
}

template <typename T>
void display(std::queue<T> q) // pass by value to avoid destroying the actual
{
    std::cout << "[ ";
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << "]" << std::endl;
}
