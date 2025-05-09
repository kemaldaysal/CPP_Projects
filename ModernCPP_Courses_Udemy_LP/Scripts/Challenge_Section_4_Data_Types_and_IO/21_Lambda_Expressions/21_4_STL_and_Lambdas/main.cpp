#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::iota

#include "Person.h"
#include "Password_Validator_1.h"
#include "Password_Validator_2.h"

// See cppreference.com for documentation
// for the STL algorithms

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    return 0;
}

// for_each
// Changes and displays each element of nums vector.
void test1()
{
    std::cout << "--Test1--------" << std::endl;

    std::vector<int> nums{1, 2, 3, 4, 5};

    std::for_each(nums.begin(), nums.end(), [](int num)
                  { std::cout << ++num << " "; });

    // 2 3 4 5 6
}

/*
    is_permutation - Non-modifying sequence operation
    Tests whether two triangles are equivalent.
    Triangles are defined by a vector of three points in ANY order.
    Regardless of the order of points, if two triangles contain the
    same three points then they are equivalent.
    This is determined by testing whether one sequence of points is a
    permutation of another using a predicate lambda to compare points.
*/

void test2()
{
    std::cout << "--Test2--------" << std::endl;

    struct Point
    {
        int x;
        int y;
    };

    Point pt1{1, 2};
    Point pt2{4, 3};
    Point pt3{3, 5};
    Point pt4{3, 1};

    std::vector<Point> triangle_1{pt1, pt2, pt3};
    std::vector<Point> triangle_2{pt2, pt3, pt1};
    std::vector<Point> triangle_3{pt1, pt2, pt4};

    // Test whether triangle1 and triangle2 are equivalent
    if (std::is_permutation(triangle_1.begin(), triangle_1.end(), triangle_2.begin(), [](Point lhs, Point rhs)
                            { return lhs.x == rhs.x && lhs.y == rhs.y; }))
        std::cout << "Triangle1 and Triangle2 are equivalent!" << std::endl;
    else
        std::cout << "Triangle1 and Triangle2 are not equivalent!" << std::endl;

    // Test whether triangle1 and triangle3 are equivalent
    if (std::is_permutation(triangle_1.begin(), triangle_1.end(), triangle_3.begin(), [](Point lhs, Point rhs)
                            { return lhs.x == rhs.x && lhs.y == rhs.y; }))
        std::cout << "Triangle1 and Triangle3 are equivalent!" << std::endl;
    else
        std::cout << "Triangle1 and Triangle3 are not equivalent!" << std::endl;

    // Triangle1 and Triangle2 are equivalent!
    // Triangle1 and Triangle3 are not equivalent!
}

// transform - Modifying sequence operation
// Similar to the lambda "bonus" we defined earlier which awarded
// bonus points to test scores, the transform function applies whatever
// operation is defined within the passed lambda to each element of the sequence.
// In this case, each test score is increased by 5 points.
void test3()
{
    std::cout << "--Test3--------" << std::endl;

    size_t bonus_point{5};

    std::vector<size_t> scores{85, 87, 64, 45, 94};

    std::transform(scores.begin(), scores.end(), scores.begin(), [bonus_point](size_t score)
                   { return (score += bonus_point); });

    for (const size_t &score : scores)
    {
        std::cout << score << " ";
    } // 90 92 69 50 99

    std::cout << std::endl;
}

// remove_if - Modifying sequence operation
// This example is what's known as an erase-remove idiom and is one of
// the most common uses of lambdas with the standard template library.
// The remove_if function removes all elements for which the predicate
// lambda returns true. The way in which it does this is by replacing
// each element for which the predicate returns true with the next element
// for which the predicate returns false. The function then returns an
// iterator to the new end of the sequence.
// The size of the sequence is not altered, only the position of its
// elements and its end iterator.
// Used in conjunction with the vector member function "erase", the
// removed elements can be erased from the vector so that it only contains
// the elements for which the predicate returned false.
// In this case, the erase-remove idiom is used to remove all even numbers from nums.
void test4()
{
    std::cout << "--Test4--------" << std::endl;

    std::vector<int> nums{2, 1, 4, 6, 5, 7};

    nums.erase(std::remove_if(nums.begin(), nums.end(), [](int num)
                              { return (num % 2 == 0); }),
               nums.end());

    for (const int &num : nums)
    {
        std::cout << num << " ";
    } // 1 5 7

    std::cout << std::endl;
}

// sort - Sorting
// Sorts elements in the sequence according to the predicate lambda.
// In this example, a vector of people is first sorted by name in ascending order
// and then by age in descending order.
void test5()
{
    std::cout << "--Test5--------" << std::endl;

    Person person_1{"Larry", 25};
    Person person_2{"Moe", 27};
    Person person_3{"Curly", 40};
    Person person_4{"Alcatraz", 24};

    std::vector<Person> people{person_1, person_2, person_3, person_4};

    // Sort people by name in ascending order
    std::sort(people.begin(), people.end(), [](const Person &lhs, const Person &rhs)
              { return (lhs.get_name() < rhs.get_name()); });

    for (const Person &p : people)
    {
        std::cout << p << " ";
    } // [Person: Alcatraz : 42] [Person: Curly : 40] [Person: Larry : 33] [Person: Moe : 27]

    std::cout << std::endl;

    // Sort people by age in descending order

    std::sort(people.begin(), people.end(), [](const Person &lhs, const Person &rhs)
              { return (lhs.get_age() > rhs.get_age()); });

    for (const Person &p : people)
    {
        std::cout << p << " ";
    } // [Person: Curly : 40] [Person: Moe : 27] [Person: Larry : 25] [Person: Alcatraz : 24]

    std::cout << std::endl;
}

// in_between is used for test6
// all_of - Non-modifying sequence operation
// Tests whether all elements contained within the sequence satisfy the
// condition defined by the passed predicate lambda.

bool in_between(const std::vector<int> &nums, int start_val, int end_val)
{

    return (std::all_of(nums.begin(), nums.end(), [start_val, end_val](int num)
                        { return ((num >= start_val) && (num <= end_val)); }));
}

void test6()
{
    std::cout << "--Test6--------" << std::endl;
    std::cout << std::boolalpha;

    std::vector<int> nums(10); // vector of 10 elements
    std::iota(nums.begin(), nums.end(), 1);
    // fill the vector by incrementing starting point by 1 each time

    for (const int &num : nums)
    {
        std::cout << num << " ";
    } // 1 2 3 4 5 6 7 8 9 10

    std::cout << std::endl;

    std::cout << in_between(nums, 50, 60) << std::endl; // false
    std::cout << in_between(nums, 7, 10) << std::endl;  // false
    std::cout << in_between(nums, 1, 10) << std::endl;  // true
}

// all_of - Non-modifying sequence operation
// Tests whether all elements contained within the sequence satisfy the
// condition defined by the passed predicate lambda.
// In this case, the all_of function is contained within the class
// Password_Validator which determines whether a password contains
// a restricted symbol and thus is valid or not.
// The same can be accomplished by using the stl function "none_of" and
// changing the conditional contained within the passed lambda.
void test7()
{
	std::cout << "\n---Test7 --------------------------" << std::endl;
	
	// Password_Validator1 --------------------------------------------------
	std::string password {"holywood1$"};
	Password_Validator_1 pv1;
	
	// Test whether password is valid
	if (pv1.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
		
    // The password holywood1$ is not valid!

	// Test whether new password is valid
	password = "hollywood1";
	if (pv1.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
        
    // The password hollywood1 is valid!

	std::cout << "\n";

	// Password_Validator2 --------------------------------------------------
	password = "C++Rocks!";
	Password_Validator_2 pv2;
	
	// Test whether password is valid
	if (pv2.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
	
    // The password C++Rocks! is not valid!

	// Test whether new password is valid
	password = "CPlusPlusRocks!";
	if (pv2.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
		
    // The password CPlusPlusRocks! is not valid!
    
	// Test whether new password is valid
	password = "CPlusPlusRocks";
	if (pv2.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;

    // The password CPlusPlusRocks is valid!
}