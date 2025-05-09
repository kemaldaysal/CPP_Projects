// Section 20
// Priority Queue
#include <iostream>
#include <queue>

#include "Person.h"
#include "Template_Functions.h"

void test1();
void test2();

int main()
{
    test1();
    test2();
    return 0;
}

void test1()
{
    std::cout << "\nTest1 =========================" << std::endl;

    std::priority_queue<int> pq;
    for (int i : {3, 5, 7, 12, 23, 12, 4, 100, 0, 3, 5, 7})
        pq.push(i);

    std::cout << "Size: " << pq.size() << std::endl; // 12
    std::cout << "Top: " << pq.top() << std::endl; // 100 (largest)

    display(pq); // [ 100 23 12 12 7 7 5 5 4 3 3 0]

    pq.pop();
    display(pq); // [ 23 12 12 7 7 5 5 4 3 3 0]
}

void test2()
{
    std::cout << "\nTest2 =========================" << std::endl;

    std::priority_queue<Person> pq;
    pq.push(Person{"A", 10});
    pq.push(Person{"B", 1});
    pq.push(Person{"C", 14});
    pq.push(Person{"D", 18});
    pq.push(Person{"E", 7});
    pq.push(Person{"F", 27});

    display(pq); // Ascii order by name is overridden by user 
    // [ F E D C B A]
}
