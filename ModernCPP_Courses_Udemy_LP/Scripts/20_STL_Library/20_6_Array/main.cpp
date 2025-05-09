// Section 20
// std::array

#include <iostream>
#include <array>
#include <algorithm>
#include <numeric> // for more algorithms like accumulate

void display(const std::array<int, 5> &arr);
void display_dbl(const std::array<double, 5> &arr);
void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();

    return 0;
}

void display(const std::array<int, 5> &arr)
{
    std::cout << "[ ";
    for (const auto &element : arr)
    {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

void display_dbl(const std::array<double, 5> &arr)
{
    std::cout << "[ ";
    for (const auto &element : arr)
    {
        std::cout << element << " ";
    }

    std::cout << "]" << std::endl;
}

void test1() // declarations and initializations, accessing and changing elements, size(), front(), back()
{
    std::cout << "Test 1-----------------------" << std::endl;
    std::array<int, 5> arr1{1, 2, 3, 4, 5}; // double {{}} if C++11
    std::array<int, 5> arr2;
    std::array<int, 5> arr3{40, 50, 60}; // 2 left unitialized automatically set to 0

    display(arr1); // [ 1 2 3 4 5 ]
    display(arr2); // garbage [ 6290992 0 -916514512 32759 -916514688 ]
    display(arr3); // [ 40 50 60 0 0 ]

    arr2 = {10};
    display(arr2); // [ 10 0 0 0 0 ]

    arr2 = {10, 20, 30, 40, 50};
    display(arr2); // [ 10 20 30 40 50 ]

    std::cout << "Size of arr1 is: " << arr1.size() << std::endl; // 5
    std::cout << "Size of arr2 is: " << arr2.size() << std::endl; // 5
    std::cout << "Size of arr3 is: " << arr3.size() << std::endl; // 5

    arr1[0] = 1000;    // no bounds checking !!
    arr1.at(1) = 2000; // safer way with bounds checking
    display(arr1);     // [ 1000 2000 3 4 5 ]

    std::cout << "Front of arr2: " << arr2.front() << std::endl; // 10
    std::cout << "Back of arr2: " << arr2.back() << std::endl;   // 50
}

void test2() // fill(), swap()
{
    std::cout << "Test 2-----------------------" << std::endl;
    std::array<int, 5> arr1{1, 2, 3, 4, 5};
    std::array<int, 5> arr2{10, 20, 30, 40, 50};

    display(arr1); // [ 1 2 3 4 5 ]
    display(arr2); // [ 10 20 30 40 50 ]
    arr1.fill(0);

    display(arr1); // [ 0 0 0 0 0 ]

    arr1.swap(arr2);
    display(arr1); // [ 10 20 30 40 50 ]
    display(arr2); // [ 0 0 0 0 0 ]
}

void test3() // data()
{
    std::cout << "Test 3-----------------------" << std::endl;

    std::array<int, 5> arr1{1, 2, 3, 4, 5};

    int *ptr{arr1.data()}; // return the raw array's (stored in arr1 object) first element's address

    *ptr = 10000;

    display(arr1); // [ 10000 2 3 4 5 ]

    *(ptr + 1) = 20000;
    display(arr1); // [ 10000 20000 3 4 5 ]
}

void test4() // sort()
{
    std::cout << "Test 4-----------------------" << std::endl;
    std::array<int, 5> arr1{2, 1, 4, 5, 3};
    display(arr1); // [ 2 1 4 5 3]

    std::sort(arr1.begin(), arr1.end());

    display(arr1); // [ 1 2 3 4 5 ]

    std::array<double, 5> arr2{12.0, 4.5, 36.31, 36.3, -45.2};
    display_dbl(arr2); // [ 12 4.5 36.31 36.3 -45.2 ]

    std::sort(arr2.begin(), arr2.end());
    display_dbl(arr2); // [ -45.2 4.5 12 36.3 36.31 ]
}

void test5() // min_element(), max_element()
{
    std::cout << "Test 5-----------------------" << std::endl;
    // returns an ITERATOR to the min-max elements, we need to dereference it!!

    std::array<int, 5> arr1{2, 1, 4, 5, 3};

    std::array<int, 5>::iterator min_num{std::min_element(arr1.begin(), arr1.end())};
    auto max_num{std::max_element(arr1.begin(), arr1.end())};

    std::cout << "min: " << *min_num << ", max: " << *max_num << std::endl; // min: 1, max: 5
}

void test6() // adjacent_find()
{
    // returns the first occurrence of 2 adjacent values.
    // for comparing class objects' attributes, overloaded == operators are needed
    std::cout << "Test 6-----------------------" << std::endl;

    std::array<int, 5> arr1{2, 1, 3, 3, 5};

    auto adjacent{std::adjacent_find(arr1.begin(), arr1.end())};
    if (adjacent != arr1.end())
    {
        std::cout << "Adjacent element found with value: " << *adjacent << std::endl; // 3
    }
    else
    {
        std::cout << "No adjacent elements found" << std::endl;
    }
}

void test7() // accumulate() is from #include <numeric>
{
    // make sure all the accumulated values are in the same type
    std::cout << "Test 7-----------------------" << std::endl;
    std::array<int, 5> arr1{1, 2, 3, 4, 5};

    int sum{std::accumulate(arr1.begin(), arr1.end(), 0)};               // sum at beginning will be 0
    std::cout << "Sum of the elements in arr1 is: " << sum << std::endl; // 15
}

void test8() // count()
{
    std::cout << "Test 8-----------------------" << std::endl;
    std::array<int, 10> arr1{1, 2, 3, 1, 2, 3, 3, 3, 3, 3};

    auto count{std::count(arr1.begin(), arr1.end(), 3)}; // count 3s

    std::cout << "Found 3: " << count << " times" << std::endl; // 6
}

void test9() // count_if()
{
    std::cout << "Test 9-----------------------" << std::endl;
    std::array<int, 10> arr1{1, 2, 3, 50, 60, 70, 80, 200, 300, 400};

    auto count_conditioned{std::count_if(arr1.begin(), arr1.end(),
                                         [](int x)
                                         { return (x > 10 && x < 200); })};

    std::cout << "Found " << count_conditioned << " matches that > 10 and < 200" << std::endl; // 4
}