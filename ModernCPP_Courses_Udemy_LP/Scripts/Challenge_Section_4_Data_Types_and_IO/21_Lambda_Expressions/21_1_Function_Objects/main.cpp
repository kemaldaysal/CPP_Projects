#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct Square_Functor
{
    void operator()(int x) // overloads ()
    {
        std::cout << x * x << " ";
    }
};

template <typename T>
struct Displayer
{
    void operator()(const T &data) // overloads ()
    {
        std::cout << data << " ";
    }
};

class Multiplier
{
private:
    int coeff;

public:
    Multiplier(int x)
        : coeff{x} {}

    int operator()(int x) const
    {
        return x * coeff;
    }
};

int main()
{
    std::cout << "\nTest1-------" << std::endl;
    Square_Functor squarer_obj;
    squarer_obj(5); // displays 25 // square.operator()(5)

    Displayer<int> d1;
    Displayer<std::string> d2;

    d1(100);     // displays 100
    d2("Frank"); // displays Frank

    std::cout << "\nTest2-------" << std::endl;
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<std::string> vec2{"Larry", "Moe", "Curly"};

    std::for_each(vec1.begin(), vec1.end(), squarer_obj); // 1 4 9 16 25
    std::cout << std::endl;

    std::for_each(vec1.begin(), vec1.end(), Displayer<int>()); // 1 2 3 4 5
    std::cout << std::endl;

    std::for_each(vec2.begin(), vec2.end(), Displayer<std::string>()); // Larry Moe Curly
    std::cout << std::endl;

    std::for_each(vec2.begin(), vec2.end(), d2); // Larry Moe Curly
    std::cout << std::endl;

    std::cout << "\nTest3-------" << std::endl;
    // Below codes doesn't need anything else from above (except vec1 and vec2) thanks to lambdas
    std::for_each(vec1.begin(), vec1.end(), [](int x)
                  { std::cout << x * x << " "; });
    // 1 4 9 16 25
    std::cout << std::endl;

    std::for_each(vec1.begin(), vec1.end(), [](int x)
                  { std::cout << x * 10 << " "; });
    // 10 20 30 40 50
    std::cout << std::endl;

    std::for_each(vec2.begin(), vec2.end(), [](std::string s)
                  { std::cout << s << " "; });
    // Larry Moe Curly

    std::cout << std::endl;

    std::cout << "\nTest4-------" << std::endl;
    Multiplier mult(100);
    vec1 = {1, 2, 3, 4};

    std::transform(vec1.begin(), vec1.end(), vec1.begin(), mult);
    std::for_each(vec1.begin(), vec1.end(), d1); // 100 200 300 400
    std::cout << std::endl;

    vec1 = {1, 2, 3, 4};
    std::transform(vec1.begin(), vec1.end(), vec1.begin(), [](int x) {
        return x * 100;
    });
    std::for_each(vec1.begin(), vec1.end(), [] (int x) {
        std::cout << x << " ";
    });  // 100 200 300 400

    return 0;
}
