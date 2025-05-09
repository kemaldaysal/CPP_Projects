//==========================================\\\ Main Includes - start

#include <iostream>
#include <stdint.h>
#include <climits>
#include <cfloat>
#include <vector>
#include <typeinfo>
#include <cctype>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib> // required for rand()
#include <ctime>   // required for time()
#include <iomanip>

//==========================================\\\ Main Includes - end

//==========================================\\\ Custom Includes - start

// #include "HBank_Account.h"
// #include "Player.h"
// #include "Mystring_start.h"
// #include "Mystring_copy_assignment.h"
// #include "Mystring_move_assignment.h"
// #include "Mystring_operator_methods.h"
// #include "Mystring_operator_functions_non_member.h"
// #include "Mystring_insertion_extraction.h"
// #include "Account_Inheritance_1.h"
// #include "Savings_Account_Inheritance_1.h"
// #include "Inheritance_2_Base_Class.h"
// #include "Inheritance_2_Derived_Class.h"
// #include "Inheritance_3_Constructors_and_Destructors.h"
// #include "Inheritance_4_Passing_Arguments_to_Base_Class_Constructors.h"
// #include "Inheritance_5_Copy_and_Move_Constructors_and_Assignments.h"
// #include "Inheritance_6_Redefining_Base_Class_Methods_Account.h"
// #include "Inheritance_6_Redefining_Base_Class_Methods_Savings_Account.h"
//==========================================\\\ Custom Includes - end

//==========================================\\\ Including namespace - start
// using namespace std;
//==========================================\\\ Including namespace - end

//==========================================\\\ Classes - start
/*//------------------------------------------|| Basic Class Declarations
// private by default, we made them public
class Player
{
public:
    // attributes
    string name{""};
    int health{100};
    int xp{0};

    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; } // basic implementation
    bool is_dead(void) { return ((health > 0) ? 1 : 0); }

    // The methods are declared above but they must ideally be declared in some header files.
};

class Account
{
public:
    // attributes
    string name{""};   // can be initialized with C++11 and above
    double balance{0}; // can be initialized with C++11 and above

    // methods
    bool deposit(double amount)
    {
        balance += amount;
        cout << "In deposit" << endl;
        return 1;
    } // basic implementation here

    bool withdraw(double amount)
    {
        balance -= amount;
        cout << "In withdraw" << endl;
        return 1;
    } // basic implementation here
};
*/

/*//------------------------------------------|| Class Member Access Modifiers - Public and Private

// class Class_Name
// {
// public:
//     // declarations;
// };

// class Class_Name
// {
// private:
//     // declarations;
// };

// class Class_Name
// {
// protected:
//     // declarations;
// };
*/

//------------------------------------------|| Implementing Member Methods
/*//------------------------------------------| Inside the Class Declaration

class Knight
{
private:
    string name{"Dimitri"};
    int age{26};
    string specialty{"Barbarian"};
    string weapon{"Sword"};

public:
    void change_weapon(string new_weapon) { weapon = new_weapon; }
    void print_info(void)
    {
        cout << "Knight " << name << " (" << age << ") is a/an " << specialty << " who uses a " << weapon << ". " << endl;
    }
};
*/

/*//------------------------------------------| Outside the Class Declaration

class Bank_Account
{
private:
    double balance{};

public:
    void set_balance(double amount); // method (function) prototype
    double get_balance(void);        // method (function) prototype
};
*/

//------------------------------------------| Separate File Declaration
// It's defined on HBank_Account.h file.
// Functions are created on HBank_Account.cpp file, it's called in .h file.
// We just used #include "HBank_Account.h" file in this main file

//------------------------------------------|| Constructors and Destructors
/*//------------------------------------------| Constructors

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // Function prototypes here (functions declared outside of the class)
    // Overloaded constructors
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
};

class Account
{
private:
    std::string name;
    double balance;
public:
    // Function prototypes here (functions declared outside of the class)
    // Constructors
    Account();
    Account(std::string name, double balance);
    Account(std::string name);
    Account(double balance);
};

*/

/*//------------------------------------------| Destructors

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // Function prototypes here (functions declared outside of the class)
    // Overloaded constructors
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
    // Destructor
    ~Player();
};
*/

/*//------------------------------------------| Creating Objects with Constructor and Destructors
class Player
{
private:
    std::string name;
    int health;
    int xp;

public:

    void set_name(std::string name_val)
    {
        name = name_val;
    }

    // Overloaded constructors
    Player()
    {
        cout << "No args constructor called" << endl;
    }

    Player(std::string name)
    {
        cout << "String arg constructor called" << endl;
    }

    Player(std::string name, int health, int xp)
    {
        cout << "3 args constructor called" << endl;
    }
    // Destructor
    ~Player()
    {
        cout << "Destructor called for " << name << endl;
    }
};
*/

/*//------------------------------------------| Default Constructor (No-args constructor)

class Account
{
private:
    std::string name;
    double balance;

public:
    bool withdraw(double amount);
    bool deposit(double amount);

    // No constructors provided as can be seen
};
*/

/*//------------------------------------------| User-Defined Default Constructor (No-args constructor)

class Account
{
private:
    std::string name;
    double balance;

public:
    bool withdraw(double amount);
    bool deposit(double amount);

    Account()
    {
        name = "None";
        balance = 0;
    }
    // User defined default constructor is provided (healthier way)
};
*/

/*//------------------------------------------| Class with a no default constructor but with a custom constructor

class Account
{
private:
    std::string name;
    double balance;

public:
    bool withdraw(double amount);
    bool deposit(double amount);

    Account(std::string name_val, double balance_val)
    {
        name = name_val;
        balance = balance_val;
    }
    // No default constructor is provided
    // Custom constructor is provided
};
*/

/*//------------------------------------------| Constructor Initialization Lists

// class Player
// {
// private:
//     std::string name;
//     int health;
//     int xp;

// public:
//     // // Instead this previous no args constructor
//     // Player()
//     // {
//     //     name = "None"; // actually an assignment, no initialization
//     //     health = 0;
//     //     xp = 0;
//     // }

//     // use this better way below:
//     Player(): name{"None"}, health{0}, xp{0}
//     {
//         // anything...
//     }

// };

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    Player() : name {"None"}, health {0}, xp {0}
    {

    }

    Player(std::string n_name) : name{n_name}, health {0}, xp {0}
    {

    }

    Player(std::string n_name, int n_health) : name {n_name}, health {n_health}, xp {0}
    {

    }

    Player(std::string n_name, int n_health, int n_xp) : name {n_name}, health {n_health}, xp {n_xp}
    {

    }

};
*/

/*//------------------------------------------| Delegating Constructors

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(std::string n_name, int n_health, int n_xp)
    : name{n_name}, health{n_health}, xp{n_xp}
    {
        cout << "Full constructor is called" << endl;
    }

    // Here's the delegation
    Player()
    : Player{"None", 0, 0} // NOTICE THE CURLY BRACES INSTEAD OF PARANTHESES !!
    {
        cout << "No-args constructor is called" << endl;
    }

    Player(std::string n_name)
    : Player{n_name, 0, 0}
    {
        cout << "Name constructor is called" << endl;
    }

    Player(std::string n_name, int n_health)
    : Player{n_name, n_health, 0}
    {
        cout << "Name, health constructor is called" << endl;
    }
};
*/

/*//------------------------------------------| Constructor Parameters and Default Values
class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // Constructor with default parameter values
    Player(std::string n_name = "None", int n_health = 0, int n_xp = 0)
    : name {n_name}, health {n_health}, xp {n_xp}
    {

    }
};
*/

//------------------------------------------| Copy Constructor
//------------------------------------------ Use Cases
/*//------------------------------------------ Pass by value
class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // Constructor with default parameter values
    Player(std::string n_name = "None", int n_health = 0, int n_xp = 0)
    : name {n_name}, health {n_health}, xp {n_xp}
    {

    }

    void Player_display_health(void)
    {cout << name << "'s health: " << health << endl;}

    void Player_kill(void)
    {health = 0;}

};
*/

/*//------------------------------------------ Return object by value

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // Constructor with default parameter values
    Player(std::string n_name = "None", int n_health = 0, int n_xp = 0)
    : name {n_name}, health {n_health}, xp {n_xp}
    {}

    int info_health(void)
    {return health;}

    std::string info_name(void)
    {return name;}

    int info_xp(void)
    {return xp;}

};

*/

/*//------------------------------------------ Constructing one object based on another

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // Constructor with default parameter values
    Player(std::string n_name = "None", int n_health = 0, int n_xp = 0)
    : name {n_name}, health {n_health}, xp {n_xp}
    {}

    int info_health(void)
    {return health;}

    std::string info_name(void)
    {return name;}

    int info_xp(void)
    {return xp;}
};
*/

/*//------------------------------------------_Declaring and Using Copy Constructor

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // Constructor with default parameter values
    Player(std::string n_name = "None", int n_health = 0, int n_xp = 0)
        : name{n_name}, health{n_health}, xp{n_xp}
    {
        cout << "3-args constructor is called" << endl;
    }

    // Declaring custom copy constructor
    Player(const Player &source)
        : name{source.name}, health{source.health}, xp{source.xp}
    // : Player {source.name, source.health, source.xp} // This would also call the 3-args constructor everytime a copy is made
    {
        cout << "Custom copy constructor is called, made copy of: " << source.name << endl;
    }

    // Declaring a destructor
    ~Player() { cout << "Destructor is called for: " << name << endl; }

    int info_health(void)
    {
        return health;
    }

    std::string info_name(void)
    {
        return name;
    }

    int info_xp(void)
    {
        return xp;
    }
};
*/

/*//------------------------------------------_ Shallow Copying with the Copy Constructor

class Shallow
{
private:
    int *data;

public:
    Shallow(int d) // Constructor
    {
        data = new int; // allocate storage
        *data = d;      // place d into the location at pointer "data".
    }

    Shallow(const Shallow &source) // Copy
    : data(source.data)
    {
        cout << "Copy constructor - shallow" << endl;
    }

    ~Shallow() // Destructor
    {
        delete data; // free allocated storage
        cout << "Destructor freed data" << endl;
    }

    int Display_Data(void)
    {
        return *data;
    }

    void set_data_value(int new_val)
    {
        *data = new_val;
        cout << "New value set code executed" << endl;
    }

};
*/

/*//------------------------------------------_ Deep Copying with the Copy Constructor

class Deep
{
private:
    int *data;

public:
    Deep(int d) // constructor
    {
        cout << "Constructor is called to assign " << d << " to " << data << " address" << endl;

        data = new int;
        *data = d;
    }

    // Deep(const Deep &source) // copy constructor with deep copy
    // {
    //     cout << "Deep copy constructor is called from source data: " << source.data << endl;
    //     data = new int;
    //     *data = *(source.data); // copying the data
    // }

    // Deep copy constructor - delegating constructor
    Deep(const Deep &source)
        : Deep{*(source.data)}
    {
        cout << "Deep copy constructor is called from source data: " << source.data << endl;
    }

    ~Deep()
    {
        cout << "Destructor is called at address: " << data << endl;
        delete data;
    }

    int get_data_value(void) { return *data; }

    void set_data_value(int d) { *data = d; }
};
*/

/*//------------------------------------------| Move Constructor
class Move
{
private:
    int *data; // raw pointer
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value(void) { return *data; }

    Move(int d) // Constructor
    {
        cout << "Constructor for: " << d << endl;
        data = new int;
        *data = d;
    }

    Move(Move &&source) noexcept // Move Constructor
        : data{source.data}
    {
        source.data = nullptr;
        cout << "Move constructor - moving resource: " << *data << endl;
    }

    Move(const Move &source) // Copy Constructor
        : Move{*(source.data)}
    {
        cout << "Copy constructor - deep copy for: " << *data << endl;
    }

    ~Move() // Destructor
    {
        if (data != nullptr)
        {
            cout << "Destructor freeing data for: " << *data << endl;
        }
        else
        {
            cout << "Destructor freeing data for nullptr" << endl;
        }
        delete data;
    };
};
*/

/*//------------------------------------------| Using const with classes
class Player
{
private:
    string name;
    int health;
    int xp;

public:
    string get_name() const // Const ensurance to compiler that this function won't modify the object's elements
    {
        return name;
    }

    void set_name(string new_name)
    {
        name = new_name;
    }

    // Overloaded Constructors
    Player(string new_name, int new_health, int new_xp)
        : name{new_name}, health{new_health}, xp{new_xp} {}

    Player()
        : Player{"None", 0, 0} {}

    Player(string new_name)
        : Player{new_name, 0, 0} {}
};
*/

/*//------------------------------------------| Static Class Members
// It's not declared here, it's declared in Player.h and Player.cpp !!
// It's a very important and useful topic so don't miss it or don't forget it!
*/

/*//------------------------------------------| Structs vs Classes
class c_Person
{
    std::string name;       // private by default
    std::string get_name(); // private by default
};

// struct Person
// {
//     std::string name;
//     std::string get_name() {return name;} // Why to use this when name is public?
// };

*/

/*//------------------------------------------| Friend of a Class

class Enemy;

class Player
{
private:
    friend void display_player(Player &p); // an outsider function
    friend void Enemy::display_player_from_enemy_class(Player &p); // a public method at Enemy function
    friend class Enemy;

    std::string name;
    int health;
    int xp;

    int shared_count;

public:

    Player(std::string new_name, int new_health, int new_xp)
        : name{new_name}, health{new_health}, xp{new_xp} {}

    Player()
        : Player{"None", 0, 0} {}

    Player(const Player &source)
        : Player{source.name, source.health, source.xp} {}

    ~Player() {}
};

class Enemy
{
private:
    std::string name;
    int health;
    int xp;

public:

    void display_player_from_enemy_class(Player &p)
    {
        std::cout << p.name << std::endl;
        std::cout << p.health << std::endl;
        std::cout << p.xp << std::endl;
    }

    Enemy(std::string new_name, int new_health, int new_xp)
        : name{new_name}, health{new_health}, xp{new_xp} {}

    Enemy()
        : Enemy{"None", 0, 0} {}

    Enemy(const Enemy &source)
        : Enemy{source.name, source.health, source.xp} {}

    ~Enemy() {}
};

*/

//==========================================\\\ Operator Overloading
//------------------------------------------|| What is operator overloading

//==========================================\\\ Classes - end

//==========================================\\\ Structs - start

/*//------------------------------------------| Structs vs Classes
struct s_Person
{
    std::string name;
    std::string get_name() { return name; } // Why to use this when name is public?
};
*/

//==========================================\\\ Structs - end

//==========================================\\\ Function prototypes - start

//.........................................Pass by value
// void f_pass_by_value_1(int num); // Pass by value

/*//.........................................Default Arguments
double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.5);

void greeting(string name, string prefix = "Mr.", string suffix = " ");
*/

/*//.........................................Function Overloading

void print(int num);
void print(double num);
void print(string s);
void print(string s, string t);
void print(vector <string> v);
*/

/*//...........................................Passing Arrays into Functions
void print_array(const int array[], size_t array_size);
*/
/*//...........................................Passing Vectors into Functions
void print_vector(vector <int> array);
*/

/*//...........................................Pass by Reference

void scale_number(int &num);
void swap(int &a, int &b);
void vector_organizer_1(vector<int> v);
void vector_organizer_2(vector<int> &v);
void print_constant_example(const vector<int> &v);
void clear_vector(vector <string> &v);
void global_example();
*/

/*//...........................................Scope Rules - Static - Global
void global_example();
void static_local_example();
*/

/*//...........................................Function Calls - Stack Operations

int func1 (int a, int b);
void func2 (int &x, int y, int z);
*/

/*//...........................................Inline Functions
inline int add_numbers(int a, int b);
*/

/*//...........................................Recursive Functions

unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);
double a_penny_doubled_everyday(int n, double amount=0.01);
*/

/*//.........................................|| Passing Pointers to Functions
void double_data(int *int_ptr);
void display(const vector<string> *const v);
void display(const vector<int> *const v, int sentinel);
void display(const int *arr, int sentinel);
int find_max_element(int *arr, int size);
void reverse_array(int *arr, int size);
string reverse_string(const string &str);
*/

/*//.........................................|| Returning a Pointer from a Function
const int *largest_int (const int *const int_ptr1, const int *const int_ptr2);
*/
/*//.........................................|| Returning Dynamically Allocated from a Function

int *create_array(size_t size, int init_value = 0);
*/

/*//==========================================\\\ L-Values, R-Values and L-References (Introduction)
//.........................................|| L-Value References

int square(int &n);

*/

//------------------------------------------|| Constructors and Destructors
//------------------------------------------| Copy Constructor
//------------------------------------------ Use Cases
/*//------------------------------------------ Pass by value
void display_and_kill_player(Player p);
*/

/*//------------------------------------------ Return object by value
Player create_super_enemy(void);
*/

/*//------------------------------------------_Declaring and Using Copy Constructor
void display_player(Player p);
*/

/*//------------------------------------------_ Shallow Copying with the Copy Constructor
void display_shallow(Shallow object);
*/

/*//------------------------------------------_ Deep Copying with the Copy Constructor
void display_deep(Deep s);
*/

//------------------------------------------| Move Constructor
/*//------------------------------------------_ L-Value Reference Parameters
void func(int &num);
*/

/*//------------------------------------------_ R-Value Reference Parameters
void func(int &&num);
*/

/*//------------------------------------------_ Overloaded L-Value and R-Value Reference Parameters
void func(int &num);
void func(int &&num);
*/

/*//------------------------------------------| Using const with classes
void display_player_name(const Player &p);
*/

/*//------------------------------------------| Static Class Members
void display_active_player_count(void);
*/

/*//------------------------------------------| Friends of a class
void display_player(Player &p);
*/

//______________Function prototoypes - end

/*// Global variables - start
// They're declared outside ANY class or function.
int num {300};
*/
// Global variables - end

int main(void)
{
    /*//================Nums with single quotes for better display (benefits only to programmers)
    uint64_t num {122'225'588'502};
    cout << "The val is: " << num << endl;
    */

    /* //================Using benefits of climits, cfloat libraries and sizeof operator

     cout << "Displaying min and max values below" << endl;
     cout << "Integer min: " << INT_MIN << ", max: " << INT_MAX << endl;
     cout << "Float min: " << FLT_MIN << ", max: " << FLT_MAX << endl;
     cout << "Double min: " << DBL_MIN << ", max: " << DBL_MAX << endl;
     cout << "Long double min: " << LDBL_MIN << ", max: " << LDBL_MAX << endl;
     cout << "Char min: " << CHAR_MIN << ", max: " << CHAR_MAX << endl;
     cout << "Long long min: " << LLONG_MIN << ", max: " << LLONG_MAX << endl;

     uint8_t test_num {254};

     cout << "Sizeof test_num: " << sizeof(test_num) << " bytes" << endl;

     */

    /*//==================================Arrays
    // You can test them and see it yourself in debug mode

    int test_scores [5] {100, 95, 99, 87, 88}; // Initialize all 5 elements

    int high_score_per_level [10] {3,5}; // init 1st and 2nd elements to 3, 5 and remaining elements to 0

    const int days_in_year {365};

    double hi_temperatures [days_in_year] {}; // init all 365 elements to 0.
    double low_temperatures [days_in_year] {1}; // init first element to 1, then all remaining elements to 0
    double mid_temperatures [days_in_year] {1,2}; // init 1st element to 1, 2nd to 2, remaining elements to 0

    int auto_sized_array [] {1,2,3,4,5}; // The size is determined by compiler based on the count of initialized elements.

    char char_array [] {'k', 'e', 'm', 'a', 'l'};
    cout << "The first element of char_array is " << char_array[0] << endl;
    cout << "The last element of char_array is " << char_array[sizeof(char_array)-1] << endl;
    cout << "Starting address of char array ??: " << char_array << endl;

    int int_array [] {1,2,3,4,5};
    cout << "Starting address of the int array: " << int_array << endl;
    cout << "Address of 2nd element: " << int_array + sizeof(int) << endl;


    // Changing first and last element of an array
    int test_array[10] {0};
    test_array[0] = 100;

    cout << "Size of test_array: " << (sizeof(test_array)/sizeof(int)) << endl;
    int array_len_test_array = (sizeof(test_array) / sizeof(int));
    test_array[array_len_test_array-1] = 1000;

    // Multidimensional arrays
    int movie_rating [3][4] {}; // initialize 3 (rows) x 4 (columns) array filled with 0s

    int movie_rating_2 [3][4] // initialize 3x4 array, filled with these values
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int movie_rating_3d [3][4][2] {};// 3 dimensional array
    // Try to define them as the same way as before
    */

    /*//=================================Vectors
    // #include <vector> // before main
    // using namespace std is also needed for types

     vector <char> vowels;

     vector <int> test_scores;

     vector <char> vowels_initialized {'a', 'e', 'i', 'o', 'u'};
     vector <int> test_scores_initialized {100, 98, 89, 85, 93};
     vector <double> hi_temperatures_initialized (365, 24.3);

     cout << hi_temperatures_initialized[3] << endl;
     cout << hi_temperatures_initialized.at(3) << endl;

     //cout << "Please enter the value to change the 4th element: " << endl;
     //cin >> hi_temperatures_initialized.at(4);
     //cout << "4th element is now: " << hi_temperatures_initialized.at(4) << endl;

     hi_temperatures_initialized.at(5) = 20.9;
     hi_temperatures_initialized[5] = 20.9;
     cout << hi_temperatures_initialized.at(5) << endl;

     // Pushback Method and Changing Size Dynamically

     vector <int> test_scores_dynamic {100, 95, 99}; // size is 3 for now

     test_scores_dynamic.push_back(80); // 100, 95, 99, 80 (size = 4)
     test_scores_dynamic.push_back(90); // 100, 95, 99, 80, 90 (size = 5)

     //// Checking out of bounds

     vector <int> test_scores_boundary {100,95};
     // test_scores_boundary.at(2) = 97; // It'll throw an out of bounds exception error and won't let you continue
     // test_scores_boundary[2] = 97; // But this one won't throw an out of bounds error, may let you continue or may crash, depending on the content in that memory.

     // cout << "5th element: " << test_scores_boundary.at(5) << endl; // Out of bounds also works when reading vector data
     // cout << "5th element: " << test_scores_boundary[5] << endl; // While this old one won't do boundary checks and shows anything on that memory location

     //// Multidimensional Vectors

     vector<vector<int>> movie_ratings
     {
         {1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12}
     };

     cout << "Here's the rate of 1st movie reviewed by 1st reviewer: " << movie_ratings[0][0] << endl;
     cout << "Here's the rate of 1st movie reviewed by 1st reviewer: " << movie_ratings.at(1).at(1) << endl; // gives overload error but works ??

     vector <int> vec {10, 20, 30, 40 ,50};


     vec.at(0) = 100;

     /// The 2 lines below are useless in vectors because vectors has more information than arrays, sizeof doesn't work here, use .size instead.
     //cout << "Size calc: " << sizeof(vec)/sizeof(int) << endl; // This outputted 6 while i was expecting 5
     //vec.at((sizeof(vec)/sizeof(int))-2) = 1000; // WHY DID WE USE -2 FOR THE LAST ELEMENT? SIZEOF COUNTS THE VANILLA ARRAY AS 6 ??
     vec.at(vec.size() - 1) = 1000; // Access the last element
     */

    //============================== Arithmetic Operations
    /// Getting a float result when dividing integers
    /* // Unexpected integer result
    float num1 {100};
    int num2 {200};
    float result = num1 / num2;
    cout << "Result of 100/200 as they're both ints: " << result << endl;


    // To get expected float result
    float num1{100};
    int num2{200};
    float result = num1 / num2;
    cout << "Result of 100/200 normal: " << result << endl;
    */

    /// Increment / Decrement Operator

    // int cnt {10};

    // cout << "cnt original: " << cnt << endl;

    // cnt++;
    // cout << "cnt++: " << cnt << endl;

    // ++cnt;
    // cout << "++cnt: " << cnt << endl;

    // They both end to the same result but if you do these operations inside the cout statements,
    // ++cnt results quicker, cnt++ results latter. But in this example, it doesn't matter

    // /// Pre-Increment
    // int cnt {10};
    // int result {0};

    // cout << "Counter at the beginning: " << cnt << endl;

    // result = ++cnt; // First, pre-increment cnt, then assign cnt to result, RESULT IS INCREMENTED
    // cout << "Counter: " << cnt << endl; // Resulted 11
    // cout << "Result: " << result << endl; // Resulted 11

    // /// Post-Increment
    // int cnt {10};
    // int result {0};

    // cout << "Counter at the beginning: " << cnt << endl;

    // result = cnt++; // First, assign cnt to result, then inrement cnt, RESULT ISN'T INCREMENTED
    // cout << "Counter: " << cnt << endl; // Resulted 11
    // cout << "Result: " << result << endl; // Resulted 10

    // /// Unexpected behaviour when incrementing same variable in same sentence
    // int i {0};
    // cout << "Original i: " << i << endl;
    // cout << "i++ result: " << i++ << ", then ++i result: " << ++i << endl; // DON'T USE THIS, RESULTS AS UNEXPECTED BEHAVIOUR

    //// Mixed Type Expressions - Explicit Type Casting
    /*
    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    cout << average << endl; // displays 12

    average = static_cast<double> (total_amount) / total_number;
    cout << average << endl; // displays 12.5 after casting

    cout << "New type of total_amount: " << typeid(total_amount).name() << " (it's still an integer, just casted earlier)" << endl;
    */
    // Another explicit type casting exercise
    /*
    const int num_count {3};
    int num1 {}, num2 {}, num3 {};
    int total {};

    cout << "Enter " << num_count << " numbers with a space between them: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    average = total / static_cast<double>(num_count);
    //average = total / (double)num_count; // Old C-type style, not recommended anymore

    cout << num1 << " + " << num2 << " + " << num3 << " = " << total << endl;
    cout << "Average of these " << num_count << " numbers is " << average << "." << endl;
    */
    /*
    double double1{}, double2{};

    cout << "Enter two doubles separated by a space: ";
    cin >> double1 >> double2;

    bool equal_result = (double1==double2);
    bool not_equal_result = (double1!=double2);

    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    */

    /*
    int integer1{};
    double double3{};

    cout << "Enter one integer, then one double, separated by a space: ";
    cin >> integer1 >> double3;

    bool equal_result = (integer1==double3); // Here, the integer is automatically promoted to double, only then compared
    bool not_equal_result = (integer1!=double3); // Here, the integer is automatically promoted to double, only then compared

    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    */

    //=============================== Switch Case

    //==============Enumeration Example

    /*
    enum Color
    {
        red, green, blue
    };

    Color screen_color {green};

    switch (screen_color)
    {
        case red:   cout << "red";      break;
        case green: cout << "green";    break;
        case blue:  cout << "blue";     break;
        default:    cout << "should never execute";
    }
    */

    /* // Switch example 1
    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade)
    {
        case 'a':
        case 'A':
            cout << "You need a 90 or above for A, study hard!" << endl;
            break;

        case 'b':
        case 'B':
            cout << "You need 80-89 for a B, study more!" << endl;
            break;

        case 'c':
        case 'C':
            cout << "You need 70-79 for a C." << endl;
            break;

        case 'd':
        case 'D':
            cout << "You need 50-69 for a D" << endl;
            break;

        case 'f':
        case 'F':
            {
                char confirm {};
                cout << "Are you sure (Y/N)?" << endl;
                cin >> confirm;

                if (confirm == 'y' || confirm == 'Y')
                {
                    cout << "Then, you shall not pass !!" << endl;
                }
                else if (confirm == 'n' || confirm == 'N')
                {
                    cout << "I knew you wouldn't get an F." << endl;
                }
                else
                {
                    cout << "Invalid input" << endl;
                }
                break;

            }

        default:
            cout << "This is not a valid grade" << endl;

    }

    */

    /* // Switch example 2 with enums

    enum Direction
    {
        left, right, up, down
    };

    Direction heading {left};

    switch (heading)
    {
        case left:
        {
            cout << "Going left" << endl;
            break;
        }

        case right:
        {
            cout << "Going right" << endl;
            break;
        }

        default:
        {
            cout << "Going where the road leads" << endl;
        }


    }
    */

    // /* ========================== Conditional Operator
    /*
    •	While this operator is very handy, it’s also very easy to abuse it.
        o	Best practice is to NEVER NEST A CONDITIONAL OPERATOR.
        o	This leads to if-else-if logic that quickly becomes unreadable and difficult to manage.
    */
    // === CD Independent Examples

    // int a{10}, b{20};
    // int score {92};
    // int result {};

    // result = (a > b) ? a : b;

    // result = (a < b) ? (b-a) : (a-b);

    // result = (b != 0) ? (a/b) : 0; // avoiding divide by 0

    // cout << ((score > 90) ? "Excellent" : "Good ");

    /* // ==== CD Even-Odd Finder
    int num {};

    cout << "Enter an integer: ";
    cin >> num;


    //string dtr {};
    //dtr = (num % 2) ? "odd" : "even";
    //cout << num << " is " << dtr << "." << endl;

    cout << num << " is " << ( (num%2 == 0) ? ("even") : ("odd")) << "." << endl;
    */

    /* // ==== CD Largest-Smallest Finder

    int num1 {}, num2 {};

    cout << "Enter 2 numbers separated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2)
    {
        cout << "Largest: " << ((num1>num2) ? (num1) : (num2)) << endl;
        cout << "Smallest: " << ((num1<num2) ? (num1) : (num2)) << endl;
    }
    else
    {
        cout << "Numbers are same" << endl;
    }

    */

    //======================================== Looping
    //----------------------------------------For Loops

    /*// Basic for loop structure with list initialization and ++i
    for (int i{1}; i <= 5; ++i) // list initialization can also be used here, ++i and i++ are the same
    {
        cout << i << endl;
    }
    */

    /*// Multiple Criterias and Multiple Operations in a Single For Loop

    for (int i {1}, j {10}; (i<=5 || j>=7); i++, j--)
    {
        cout << i << " * " << j << " : " << (i*j) << endl;
    }
    */

    /*// Using doubles in loop control

    for (double i {0.00}; i<=1.70; i+=0.2)
    {
        cout << "i: " << i << endl;
    }
    */

    /*// Endless for loop with single sentence
    for (;;)
        cout << "Endless loop" << endl;
    */

    /*// Another simple example
    for (int i {0}; i <= 100; i++)
    {
        cout << i;
        cout << ((i%5 == 0) ? ("\n") : (" "));
    }
    */

    /*// For loop with vectors

    vector <int> nums {66, 67, 68, 69, 70, 71};

    for (uint8_t i {0}; i<nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    */

    /*// Range-based for loop (C++11 required)

    int scores [] {100, 90, 97};

    for (int single_score : scores)
    {
        cout << single_score << endl;
    }
    */

    /*// Auto keyword for auto looping variable type declaration

    double scores_2 [] {100.6, 90.3, 97.2};

    for (auto single_score : scores_2)
    {
        cout << single_score << endl;
    }
    */

    /*// An Useful Example

     vector <double> temps {87.2, 77.1, 80.0, 72.5};

     double average_temp {}, running_sum{};

     for (auto temp: temps)
     {
         running_sum += temp;
     }

     average_temp = running_sum / temps.size();

     cout << "Average temp: " << average_temp << endl;
     */

    /*// Providing collection right in the loop

    double average_temp_2{};
    double running_sum_2{};
    int size_2{};

    for (auto temp : {60.2, 80.1, 90.0, 78.2})
    {
        running_sum_2 += temp;
        size_2++;
    }

    average_temp_2 = running_sum_2 / size_2;

    cout << "Average temp 2: " << average_temp_2 << endl;
    */

    /*// Using it on a string

    for (auto c: "Kemal Daysal")
    {
        if (c != ' ')
        {
            cout << c;
        }
    }
    */

    //========================== Do While

    /*// Input checker with do-while
    int number {};

    do {

        cout << "Enter a number between 1 and 5: ";
        cin >> number;

    } while (number < 1 || number > 5);

    cout << "Valid input, thanks." << endl;
    */

    /*// Basic GUI with quit condition
    char selection {};

    do {

        cout << "\n----------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else " << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        cout << endl;

        switch (selection)
        {
            case '1':
            {
                cout << "Option 1 selected" << endl;
                break;
            }

            case '2':
            {
                cout << "Option 2 selected" << endl;
                break;
            }

            case '3':
            {
                cout << "Option 3 selected" << endl;
                break;
            }

            case 'q':
            case 'Q':
            {
                cout << "Quitting..." << endl;
                break;
            }

            default:
            {
                cout << "Invalid input, try again" << endl;
                break;
            }

        }

    } while (selection != 'q' && selection != 'Q'); // Quit condition

    cout << "Thanks, bye" << endl;
    */

    //---------------------------------- Continue & Break
    /*// Write a collection checker and element writer program that exits if it sees -99 and skips -1s

    vector<int> arr{1, 2, -1, 3, -1, -99, 7, 8, 10};

    for (int element : arr)
    {
        if (element == -1)
        {
            continue;
        }
        else if (element == -99)
        {
            break;
        }
        else
        {
            cout << element << endl;
        }
    }
    */

    //------------------------------------------Infinite Loops
    /*//...........for loop
    for (;;)
        cout << "This'll print forever" << endl;
    */

    /*//.............while loop
    while (false)
        cout << "This'll print forever" << endl;
    */

    /*//..............do-while loop
    do {
        cout << "This'll print forever" << endl;
    } while (true);
    */

    /*//................Exit event checker

    while (true)
    {
        char response{};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> response;

        if (response == 'n' || response == 'N')
            break;
    }
    */

    //---------------------------- Nested Loops

    /*// Multiplication table from 1 to 10 (10x10)
    for (size_t num1{1}; num1 <= 10; num1++)
    {
        for (size_t num2{1}; num2 <= 10; num2++)
        {
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
        }
        cout << "----------------" << endl;
    }
    */

    /*// Filling and displaying arrays
    int arr[4][4] {};
    int filler {};

    for (size_t row{0}; row < 4; row++)
    {
        for (size_t col{0}; col < 4; col++)
        {
            arr[row][col] = filler;
            cout << arr[row][col] << " ";

            filler++;
        }
        cout << endl;
    }
    */

    /*// Nested loops with vectors
    vector<vector<int>> vector_2d{
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400, 500}};

    for (auto row : vector_2d)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    */

    /*// Histogram Filler

    size_t item_count{};

    cout << "How many items will you enter?: ";
    cin >> item_count;

    vector<int> arr{};

    for (size_t i{0}; i < item_count; i++)
    {
        cout << "Enter item " << i << ": ";
        int single_item{};
        cin >> single_item;
        arr.push_back(single_item);
    }

    for (auto val : arr)
    {
        for (int i{1}; i<=val; i++)
        {
            if (i%5 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    */

    // Useful coding challenge, pair multiplier and adder
    /*Nested Loops - Sum of the Product of all Pairs of Vector Elements
    Given a vector of integers named vec  that is provided for you, find the sum of the product of all pairs of vector elements.
    You should declare an integer variable named result  and store the final product in this variable.

    For example, given the vector  vec  to be {1, 2 , 3} , the possible pairs are (1,2), (1,3), and (2,3) .
    So the result would be (1*2) + (1*3) + (2*3)  which is 11 .

    Another example:
    Given the vector vec  to be {2, 4, 6, 8} , the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8) .
    So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140 .

    If the vector is empty or has only 1  element then the result  should be 0 .
    */

    // Below is a auto-set construct made for challenge, modifications required to execute it
    /* int calculate_pairs(vector<int> vec)
    {
        //----WRITE YOUR CODE BELOW THIS LINE----

        int result{};

        if (vec.size() == 0 || vec.size() == 1)
        {
            result = 0;
        }
        else
        {
            for (size_t i{}; i < vec.size(); i++)
            {
                for (size_t j{vec.size() - 1}; j > i; j--)
                {
                    result += vec.at(i) * vec.at(j);
                }
            }
        }

        //----WRITE YOUR CODE ABOVE THIS LINE----
        //----DO NOT MODIFY THE CODE BELOW THIS LINE----
        return result;
    }
    */

    //================================= Strings & Characters
    //================----------------- C-Style Strings
    //--------------------------------- Character Functions
    /*
        Notes:
        1) Don't forget to include <cstring>

    */

    /* // Trying to change literals
    char my_name[] {"Frank"};
    cout << my_name << endl;

    my_name[5] = 'y'; // Problem without errors or warnings, we changed \0 with y.
    cout << my_name << endl;
    */

    /*
     char my_name_2[8] {"Frank"};
     my_name_2[5] = 'y';
     cout << my_name_2 << endl;
    */

    /* // Some trials  and basic functions
    char str[80];

    strcpy(str, "Hello "); // copy
    strcat(str, "there"); // concatenate
    cout << "Strlen of str: " << strlen(str) << endl; // results 11
    int result = strcmp(str, "Hello there"); // returns 0 if they're same, >0 if str1 is greater in ASCII, <0 if str1 is smaller in ASCII
    cout << "Comparison result: " << result << endl;
    */

    /*char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    */

    /* // Basic usage of strcpy and strcat
    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    cout << "Hello " << first_name << ", your first name has " << strlen(first_name) << " characters," << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters." << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "Your full name is " << full_name << endl;
    */

    /*// Main problem when displaying strings with whitespace chars and way to display them

    cout << "Enter your full name: ";
    cin >> full_name; // Won’t read last name because cin stops reading when it sees a whitespace character. It just takes the first name

    cout << "Your full name is " << full_name << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl; // True output
    */

    // Upper letter converter

    /*char full_name_uppercase[50] {};

    cout << "Enter your full name: ";
    cin.getline(full_name,50);
    strcpy(full_name_uppercase, full_name);

    for (size_t i {}; i < strlen(full_name_uppercase); i++)
    {
        if (isalpha(full_name_uppercase[i])) // check if i. char is a valid letter
        {
            full_name_uppercase[i] = toupper(full_name_uppercase[i]);
        }
    }

    cout << "Here's your full name with uppercases: " << full_name_uppercase << endl;
    */

    //================----------------- C++ Strings
    // Note: Don't forget to include <string> and using namespace std

    /*//.........................Declaring Strings
    string s1; // initialized as empty automatically
    string s2 {"Frank"}; // Frank
    string s3 {s2}; // Frank
    string s4 {"Frank", 3}; // Fra
    string s5 {s3, 0, 2}; // Fr
    string s6 {s3, 2, 4}; // ank
    string s7 (3, 'X'); // XXX // Notice the parantheses using constructor syntax
    */

    /*//...........................Assignment
    string s1;
    s1 = "C++ Rocks!";

    string s2;
    s2 = s1; // We didn't use strcpy like we did in C-style strings, this is much easier

    string s3 {"Frank"}; // Frank

    cout << "s3 original: " << s3 << " with size of: " << s3.length() << endl;

    s3[0] = 'C'; // Crank
    s3.at(3) = 'p'; // Crap(space)
    s3.at(4) = '\0'; // Crap

    cout << "s3 new: " << s3 << " with size of: " << s3.length() << endl; // Crap with size 5 again, why??
    */

    /*//..........................Concatenation
    string part1 {"C++"};
    string part2 {"is a powerful"};

    string sentence;

    sentence = part1 + " " + part2 + " language";
    // C++ is a powerful language
    // A combination of C++ strings and C-style strings is okay,

    // sentence = "C++" + " is powerful"; // ILLEGAL !! Won't compile
    // But this one won't compile because we have 2 c-style literals
    // You can't concatenate c-style literals, it only works for C++ strings.
    // It should have had at least 1 C++ strings like this:
    sentence = part1 + "C++" + " is powerful"; // ILLEGAL !!
    */

    /*//..........................Accessing characters with [] and at() method

    string s1 {"Frank"};

    for (char c: s1)
        cout << c << " "; // Outputs F r a n k

    cout << endl;

    for (int c: s1)
        cout << c << " "; // Outputs 70 114 97 110 107 for ASCII integer equivalents
    */

    /*//......................................Comparing

    vector <bool> results;

    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple

    results.push_back(s1 == s5); // 1
    results.push_back(s1 == s2); // 0
    results.push_back(s1 != s2); // 1
    results.push_back(s1 < s2); // 1
    results.push_back(s2 > s1); // 1
    results.push_back(s4 < s5); // 0
    results.push_back(s1 == "Apple"); // 1

    cout << "Results: " << endl;
    for (auto element: results)
    {
        cout << element << endl;
    }
    */

    /*//......................................Substring

    // prototype: object.substr(start_index, length)

    string s1 {"This is a test"};

    cout << s1.substr(0, 4); // This
    cout << s1.substr(5,2); // is
    cout << s1.substr(10,5); // test
    cout << s1.substr(12,6); // st // doesn't display garbage letters in memory
    */

    /*//......................................Searching - find()
    // prototype: returns index/position = object.find(search_string, (optional) search_starting_index)

    string s1("This is a test");

    cout << s1.find("This") << endl;  // 0
    cout << s1.find("is") << endl;    // 2
    cout << s1.find("test") << endl;  // 10
    cout << s1.find('e') << endl;     // 11
    cout << s1.find("is", 4) << endl; // 5 // search starting index is included
    cout << s1.find("XX") << endl;    // returns string:npos, 18446744073709551615 // invalid target

    cout << s1.rfind("test") << endl; // 10 // search from the end but display it as normal

    string word{"Bob"}; // "The secret word is Bob
    string sentence{};
    cout << "Enter your sentence: ";
    getline(cin, sentence); // input: This house was built by Bob.

    size_t position = sentence.find("Bob");

    if (position != string::npos)                                         // if it's found (output is not npos)
        cout << "Found " << word << " at position: " << position << endl; // found at pos 24
    else
        cout << "Sorry, " << word << " is not found :(" << endl;
    */

    /*//...................................... Removing characters – erase() and clear()
    // prototype: returns the remaining string = object.erase(start_index, length_to_delete)

    string s1 {"This is a test"};

    cout << s1.erase(0, 5) << endl; // remaining: is a test
    cout << s1.erase(5, 4) << endl; // remaining: is a
    s1.clear(); // empties string s1
    */

    /*//......................................Measuring string length - length()

    string s1 {"Frank"};
    cout << s1.length() << endl; // 5

    s1 += " James";
    cout << s1.length() << endl; // 11
    cout << s1 << endl; // Frank James
    */

    /*//......................................Compound Concatenation Assignment - +=

    string s1 {"Frank"};
    s1 += " James";
    cout << s1.length() << endl; // 11
    cout << s1 << endl; // Frank James
    */

    /*//......................................Input >> and getline()
    // prototype: getline(input_source, where_to_store_it, (optional) stop_sign)
    string s1;
    cout << "Enter a string input: ";

    cin >> s1; // Suppose we typed "Hello there"
                // But it won't accept the words after space, because extractor stops at whitespace
    cout << s1 << endl; // We'll only see "Hello"

    getline(cin, s1); // Read entire keyboard input line until \n and store it at s1
    cout << s1 << endl;

    getline (cin, s1, 'x'); // input: Extra
    cout << s1 << endl; // output: E
    */

    /*//......................................Insert operator - .insert

    string unformatted_full_name{"StephenHawking"};

    string first_name{unformatted_full_name, 0, 7};        // Stephen
    string last_name = unformatted_full_name.substr(7, 7); // Hawking

    string formatted_full_name{};
    formatted_full_name = first_name + last_name; // StephenHawking
    formatted_full_name.insert(7, " ");           // Stephen Hawking
    */

    /*//......................................Swap operator - .swap

    // Entries can only include last names and they should be categorized alphabetically.
    string journal_entry_1{"Isaac Newton"};
    string journal_entry_2{"Leibniz"};

    journal_entry_1.erase(0, 6);

    if (journal_entry_1 > journal_entry_2) // Checking alphabetic order and re-ordering it using swap
        journal_entry_1.swap(journal_entry_2);

    */

    /*//......................................Another type to string conversion

    int num = 1234;
    string num_str{to_string(num)};

    cout << "num_str[0]: " << num_str[0] << endl;
    */

    //==========================================\\\ Functions
    /*//.........................................|| Cmath Library Basic Examples
    // Don't forget to #include <cmath>
    double num {};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "Sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "Cubed root of " << num << " is: " << cbrt(num) << endl;

    cout << "Sine of " << num << " is: " << sin(num) << endl;
    cout << "Cosine of " << num << " is: " << cos(num) << endl;

    cout << "Ceil of " << num << " is: " << ceil(num) << endl;
    cout << "Floor of " << num << " is: " << floor(num) << endl;
    cout << "Round of " << num << " is: " << round(num) << endl;

    double power {};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    */

    /*//.........................................|| Random Number Generator
    // #include <cstdlib> // required for rand()
    // #include <ctime> // required for time()

    int random_number {};
    size_t count_of_randoms {10};
    int min {1}; // lower bound (inclusive)
    int max {6}; // upper bound (inclusive)

    // Seed the random number generator
    // If you don't seed the generator, you'll get the same sequence random numbers at every run

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); // this seeds the random number generator based on the system time.

    for (size_t i {0}; i<count_of_randoms; i++)
    {
        random_number = rand() % (max - min + 1) + min; // generate a random number [min, max]
        cout << random_number << " ";
    }

    cout << endl;

    */

    /*//.........................................|| Pass by Value

    int num {10};

    cout << "num before calling f_pass_by_value_1: " << num << endl; // 10
    f_pass_by_value_1(num); // becomes 1000 inside function
    cout << "num after calling f_pass_by_value_1: " << num << endl; // 10 again, didn't change
    */

    /*//.........................................|| Default Arguments
    // Downside: Once we omit a paramters and use a default, then all the remaining parameters must also be omitted and their defaults used.
    // For example, we can't just use the default for parameter 1 and use modified inputs for other parameters. If we want to do that, we must change the input order.

    double cost {};
    cost = calc_cost(); // default price, tax and shipping
    cost = calc_cost(200.0); // modified price, default tax and shipping
    cost = calc_cost (200.0, 0.08); // modified price and tax, default shipping
    cost = calc_cost (106.0, 0.08, 4.25); // all modified, no defaults

    greeting("Kemal Daysal");
    greeting("Kemal Daysal","Professor","Ph.D.");
    // greeting("Joel",,"Jr."); // cant do that
    */

    /*//.........................................|| Function Overloading

    print(100); // int
    print('A'); // int 65 // because characters are always promoted to integers, compiler takes it as integer because we don't have a display char overload.
    print(102.3); // double
    print(102.3f); // double // F makes it float and float is promoted to double because we have no function that takes float.
    print("C-style string"); // C++ string // actually an unvalid parameter because we only defined a function for string vectors, not C-style strings. But because C++ compiler knows how to convert a C-style string to a C++ string object, so it'll use that conversion.

    string s {"C++ string"}; // C++ string
    print(s);

    print("C-style string", s); // both C++ string // C-style string is converted to a C++ string

    vector <string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges); // vector of strings
    */

    /*//.........................................|| Passing Arrays into Functions

    int numbers[] {0, 1, 2, 3, 4};
    print_array(numbers, 5);
    */

    /*//.........................................|| Passing Vectors into Functions

    vector <int> numbers_v {0, 1, 2, 3, 4};
    print_vector(numbers_v);
    */

    /*//.........................................|| Pass by Reference

    //----------Ex 1
    int number {1000};
    scale_number(number); // we didn't use & here, we only used it as a parameter in the function declaration
    cout << number << endl;

    //----------Ex 2
    int x{10}, y{20};
    cout << "Before conversion, x: " << x << ", y: " << y << endl;
    swap(x,y);
    cout << "After conversion, x: " << x << ", y: " << y << endl;


    //----------Ex 3

    vector <int> v1 {1,2,3,4,5};
    vector <int> v2 {1,2,3,4,5};

    cout << "Elements before changing the vector v1: ";
    for (auto element: v1)
        cout << element << " ";
    cout << endl;

    cout << "Elements before changing the vector v2: ";
    for (auto element: v2)
        cout << element << " ";
    cout << endl;

    vector_organizer_1(v1);
    vector_organizer_2(v2);

    cout << "Elements after changing the vector v1 (after func): ";
    for (auto element: v1)
        cout << element << " ";
    cout << endl;

    cout << "Elements after changing the vector v2 (after func): ";
    for (auto element: v2)
        cout << element << " ";
    cout << endl;


    //----------Ex 4

    vector <int> v {30,30,30,30,30};
    print_constant_example(v); // 30 30 30 30 30 (elements can't be changed inside because of consts)

    v.at(1) = 10; // (elements can be changed here again because they're no longer consts outside the function !!)
    v.at(2) = 60;

    print_constant_example(v); // 30 10 60 30 30 (elements can't be changed inside because of consts)


    //----------Ex 5

    vector <string> stooges {"Frank", "Ashley", "Joe"};
    cout << "Stooges before clearing" << endl; // Frank Ashley Joe
    for (string element: stooges)
        cout << element << " ";

    cout << endl;

    clear_vector(stooges);

    cout << "Stooges after clearing" << endl; // empty now
    for (string element: stooges)
        cout << element << " ";


    */

    /*//.........................................|| Scope Rules - Static - Global

    //----------Ex 1 - Scopes

    int num {100};
    int num1 {500};

    cout << "Local num is: " << num << " in main" << endl; // 100

    {   // Create a new level of scope
        int num {200};

        cout << "Local num is: " << num << " in inner block of main" << endl; // 200
        cout << "Inner block in main can see out - num1 is: " << num1 << endl; // 500
        // num1 became 500 even at the inner because it couldn't find a closer declaration for num1.
        // Then it tried to find it at the outer scope and found it.

        int num1 {700};

    }   // End of new scope

    cout << "Num1 is: " << num1 << " in main after scope1" << endl; // 500 again

    {
        int num1 {900};
    }

    cout << "Num1 is: " << num1 << " in main after scope2" << endl; // 500 again


    //----------Ex 2 - Global Variables

    int num {100};

    for (size_t i {}; i<5; i++) // call the function 4 times
    {
        global_example();
    }


    //----------Ex 3 - Static Local Variables

    int num {500}; // This one will be unused because there's a closer declaration inside the example function

    for (size_t i {}; i<5; i++) // call the function 4 times
    {
        static_local_example();
    }

    */

    /*//...........................................|| Function Calls - Stack Operations

    int x {10};
    int y {20};
    int z {};

    z = func1(x,y);

    cout << z << endl;
    */

    /*//...........................................|| Inline Functions

    int result {};
    result = add_numbers(100, 200);
    */

    /*//...........................................|| Recursive Functions

    //----------Ex 1 - Factorial and Fibonacci
                                   size_t factorial_input{3};
    size_t fibonacci_input{30};

    // cout << "Max. value of unsigned long long on this device is " << ULLONG_MAX << endl;
    cout << "Factorial of " << factorial_input << " is: " << factorial(factorial_input) << endl; // 40320
    // cout << "Fibonacci of " << fibonacci_input << " is: " << fibonacci(fibonacci_input) << endl; // 40320

    //----------Ex 2 - Save a Penny

    double total_amount{a_penny_doubled_everyday(18)};

    cout << "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
    */

    //==========================================\\\ Pointers
    //.........................................|| Declaring Pointers
    /*
    // variable_type *pointer_name;

    int *pointer_to_int {};
    double *double_ptr {nullptr};
    char* char_ptr {nullptr};
    string* string_ptr {nullptr};
    */
    /*//.........................................|| Accessing Pointer Address & Storing an Address in Pointer Variable

    int num{10};
    cout << "Value of num is: " << num << endl;          // 10
    cout << "sizeof of num is: " << sizeof(num) << endl; // 4 ...bytes to store an integer
    cout << "Address of num is: " << &num << endl;       // 0x11761ff7fc // changes at each run

    cout << endl; // ---------------------------------------------------

    int *p; // UNITIALIZED !!!

    cout << "Value of p is: " << p << endl;       // 0x19b6dff964 // GARBAGE !! // changes at each run
    cout << "Address of p is: " << &p << endl;    // 0xff615ffac0 // not the address of integer, it's the address of the pointer. // changes at each run
    cout << "sizeof p is: " << sizeof(p) << endl; // 8 bytes pointer because of 64 bit OS

    p = nullptr;                                  // set p to point nowhere
    cout << "After nullptr," << endl;
    cout << "Value of p is: " << p << endl;       // 0 // not garbage anymore, points nowhere // changes at each run
    cout << "Address of p is: " << &p << endl;    // 0xff615ffac0 // not the address of integer, it's the address of the pointer. // remained same as upper // changes at each run
    cout << "sizeof p is: " << sizeof(p) << endl; // 8 bytes pointer because of 64 bit OS

    cout << endl; // ---------------------------------------------------

    // All pointers below will have the same size (8 bytes for 64 bit OS), independent from variable type it points to
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "sizeof p1: " << sizeof(p1) << endl; // 8
    cout << "sizeof p1: " << sizeof(p2) << endl; // 8
    cout << "sizeof p1: " << sizeof(p3) << endl; // 8
    cout << "sizeof p1: " << sizeof(p4) << endl; // 8
    cout << "sizeof p1: " << sizeof(p5) << endl; // 8

    cout << endl; // ---------------------------------------------------

    int numm{15};
    int *ptr_a{&numm};

    cout << "Address of numm is: " << &numm << endl;   // 0xcaf93ff814 // same 1
    cout << "ptr_a is: " << ptr_a << endl;             // 0xcaf93ff814 // same 2
    cout << "Address of ptr_a is: " << &ptr_a << endl; // 0xcaf93ff808 // different

    cout << endl; // ---------------------------------------------------

    int score_1{100};
    int score_2{85};
    double high_temp{41.2};

    int *ptr_score{nullptr};
    ptr_score = &score_1; // OK
    ptr_score = &score_2; // changed it to point score_2's address

    // ptr_score = &high_temp; // Compiler error because of we are trying to point a double variable with a pointer to integer

    double *ptr_2{nullptr};
    ptr_2 = &high_temp; // OK now because ptr_2 is a pointer to double

    */

    /*//.........................................|| Dereferencing Pointers

    int score{100};
    int *score_ptr{&score};

    cout << *score_ptr << endl; // 100

    *score_ptr = 200;

    cout << *score_ptr << endl; // 200
    cout << score << endl;      // 200

    //-------------------------------

    string name{"Frank"};
    string *ptr_str{&name};

    cout << *ptr_str << endl; // Frank

    name = "James";

    cout << *ptr_str << endl; // James !!

    //-----------Vector Pointer Example

    vector<string> stooges{"Frank", "James", "Bill"};
    vector<string> *ptr_vector{&stooges};

    // PARANTHESES ARE CRITICAL because of default precedence order

    cout << "First stooge: " << (*ptr_vector).at(0) << endl; // Frank
    cout << "Second stooge: " << (*ptr_vector).at(1) << endl; // James
    cout << "Third stooge: " << (*ptr_vector).at(2) << endl; // Bill

    cout << "Stooges:";
    for (auto stooge:*ptr_vector) // we did it like stooges.at(0), at.(1) etc.
        cout << stooge << " "; // Frank James Bill
    cout << endl;
    */

    /*//.........................................|| Dynamic Memory Allocation

    int *ptr_int{nullptr};

    ptr_int = new int; // allocate an integer on the heap
    cout << ptr_int << endl; // 0x27528cac240 // address of fresh allocated int
    cout << *ptr_int << endl; // 684378528 // garbage random int value because recently allocated space doesn't have a value inside yet

    *ptr_int = 100; // now we assigned a value to the pointed location on the heap
    cout << ptr_int << endl; // 0x27528cac240 // still the same address
    cout << *ptr_int << endl; // 100

    delete ptr_int; // free the allocated storage and prevent memory leaks
    */

    /*//--------------Allocating Storage for an Array

    int *arr_ptr{nullptr};
    size_t size{};

    cout << "How big do you want the array? ";
    cin >> size;

    arr_ptr = new int[size]; // allocate x sized int array on the heap

    delete [] arr_ptr; // deletes the entire array that we allocated dynamically.
    // Square brackets must be empty. Do not include anything inside the brackets.

    */

    /*//--------------Allocating and Filling Double Arrays

    double *dbl_ptr{nullptr};
    size_t size{};

    cout << "How many doubles do you need?: ";
    cin >> size;

    dbl_ptr = new double[size];

    for (size_t i{}; i < size; i++)
    {
        double temp{};
        cout << "Enter " << i << ". double: ";
        cin >> temp;

        (dbl_ptr[i]) = temp;
    }

    cout << "Elements entered: ";
    for (size_t i {}; i < size; i++)
    {
        cout << dbl_ptr[i] << " ";
    }

    delete [] dbl_ptr;

    cout << "After deletion," << endl;
    cout << "dbl_ptr: " << dbl_ptr << endl;
    cout << "*dbl_ptr: " << *dbl_ptr << endl;

    */

    //--------------Memory leak // Don't run this.

    // // size_t size{};
    // // double *temp_ptr {nullptr};

    // // cout << "How many temps?: ";
    // // cin >> size;

    // // while (true)
    // //     temp_ptr = new double[size];

    /*//.........................................|| Relationship between Arrays and Pointers

    int scores[]{100, 95, 89};
    int *score_ptr{scores};

    cout << scores << endl;    // 0x31fb1ffadc
    cout << score_ptr << endl; // 0x31fb1ffadc

    cout << *scores << endl;    // first element: 100
    cout << *score_ptr << endl; // first element: 100

    cout << score_ptr << endl;       // 0x31fb1ffadc
    cout << (score_ptr + 1) << endl; // 0x31fb1ffae0 (+4 bytes (1 int size) from upper)
    cout << (score_ptr + 2) << endl; // 0x31fb1ffae4 (+8 bytes (2 int size) from upper)

    // Pointer subscript notation
    cout << score_ptr[0] << endl; // 100
    cout << score_ptr[1] << endl; // 95
    cout << score_ptr[2] << endl; // 89

    // Pointer offset notation
    cout << *score_ptr << endl;       // 100
    cout << *(score_ptr + 1) << endl; // 95
    cout << *(score_ptr + 2) << endl; // 89

    // Array offset notation
    cout << *scores << endl;       // 100
    cout << *(scores + 1) << endl; // 95
    cout << *(scores + 2) << endl; // 89

    // square brackets are very important for precedence orders
    */

    //.........................................|| Pointer Arithmetics
    /*//..................Increment-Decrement


    double temps[]{23.53, 21.35, 12.52, 5.13};
    double *score_ptr{temps};

    cout << "Printing array elements: ";
    for (size_t i{}; i<(sizeof(temps)/sizeof(double)); i++)
    {
        cout << *(score_ptr++) << " ";
    } // 23.53 21.35 12.52 5.13

    cout << endl;
    */
    //..................Addition and Subtraction
    /*
    int arr[] {5, 3, 2, 1, -4};
    int *arr_ptr_1 {arr};

    cout << *(arr_ptr_1+4) << endl; // -4 (index 0 + 4 = points index 4 now)

    int *arr_ptr_2 {arr+4};

    cout << *(arr_ptr_2-4) << endl; // 5 (index 4 - 4 = points index 0 now)

    */
    /*//..................Subtracting two pointers to find the number of elements between them
    int arr[] {5, 3, 2, 1, -4};
    int *arr_ptr_p1 {arr};
    int *arr_ptr_p2 {arr+1};
    cout << (arr_ptr_p2 - arr_ptr_p1) << endl; // 4 // gives the number of elements between the pointers

    char name[] {"Frank"};
    char *char_ptr_1 {&name[0]}; // F
    char *char_ptr_2 {&name[3]}; // n

    cout << "In the string " << name << ", " << *char_ptr_2 << " is " << (char_ptr_2-char_ptr_1) << " characters away from " << *char_ptr_1 << "." << endl; // 3
    */
    //..................Comparing two pointers using == and !=
    /*
    string s1 {"Frank"};
    string s2 {"Frank"};

    string *p1 (&s1);
    string *p2 (&s2);
    string *p3 (&s1);

    cout << (p1==p2) << endl; // false because they're pointing to different locations
    cout << (p1==p3) << endl; // true because p1 and p3 point to the same location
    */
    //..................Comparing the data pointers point to
    /*
    string s1{"Frank"};
    string s2{"Frank"};

    string *p1(&s1);
    string *p2(&s2);
    string *p3(&s1);

    cout << (*p1 == *p2) << endl; // true because it's also Frank
    cout << (*p1 == *p3) << endl; // true because it's also Frank
    */
    //--------------Interesting example including precedence and associativity rules
    /*
    int scores[]{100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while (*score_ptr != -1)
        cout << *score_ptr++ << " "; // 100 95 89 68
    //  cout << (*score_ptr)++ << endl; // way different than the upper one because of same precedence but right to left associativity!!
    */

    //.........................................|| Const in pointers
    /*//..................Pointers to constants

    int high_score {100};
    int low_score {65};

    const int *score_ptr {&high_score};

    // *score_ptr = 86; // COMPILER ERROR, CAN'T CHANGE THE POINTER DATA
    score_ptr = &low_score; // OK
    */

    /*//..................Constant pointers

    int high_score {100};
    int low_score {65};

    int *const score_ptr{&high_score};

    *score_ptr = 75; // OK
    score_ptr = &low_score; // COMPILER ERROR, CAN'T CHANGE THE POINTER ITSELF
    */

    /*//..................Constant pointers to constants

    int high_score{100};
    int low_score{65};

    const int *const score_ptr{&high_score};

    *score_ptr = 86;        // COMPILER ERROR, CAN'T CHANGE
    score_ptr = &low_score; // COMPILER ERROR, CAN'T CHANGE
    */

    /*//.........................................|| Passing Pointers to Functions
    int val{10};
    int *int_ptr(&val);

    cout << val << endl; // 10
    double_data(int_ptr);
    cout << val << endl; // 20

    // or with a simpler way

    cout << val << endl; // 20
    double_data(&val);
    cout << val << endl; // 40

    //-----Ex 2 with string vectors

    vector<string> veci{"Frank", "Bill", "John"};
    display(&veci); // Frank Bill John

    //-----Ex 3 with int vectors

    vector<int> sensor_data{5, -2, 6, 7, 9, -100, -1, -5, -102, 99};
    display(&sensor_data, -1); // 5 -2 6 7 9 -100

    //-----Ex 4 with int arrays

    int arr[]{5, 2, 1, 0, -2, -5};
    display(arr, -2); // 5 2 1 0

    //----- Max element example

    int m_arr[]{1, 5, 12, 9, -12, 3};
    int m_size = sizeof(arr) / sizeof(arr[0]);
    int max_element{find_max_element(m_arr, m_size)};

    cout << max_element << endl; // 12

    //---- Reverse Array Example

    int x_arr[]{1, 2, 3, 4, 5};
    int x_size = sizeof(x_arr) / sizeof(x_arr[0]);
    reverse_array(x_arr, x_size); // 5 4 3 2 1

    //---- Reverse String Example
    string input{"Hello World!"};

    string reversed{reverse_string(input)};
    cout << reversed << endl;

    */

    /*//.........................................|| Returning a Pointer from a Function

    int num1 {5};
    int num2 {9};

    const int *bigger_nums_address {largest_int(&num1, &num2)};

    cout << bigger_nums_address << endl; // 0x82347ffc30
    cout << *bigger_nums_address << endl; // 9
    */

    /*//.........................................|| Returning Dynamically Allocated from a Function

    size_t alloc_size{6};
    int *dyn_created_array{create_array(alloc_size, 4)}; // don't lose this variable without deleting it properly.

    for (size_t i{}; i < alloc_size; i++)
        cout << dyn_created_array[i] << " ";
    // 4 4 4 4 4 4 // size * init value.

    delete[] dyn_created_array;
    */

    /*//.........................................|| Potential Pointer Pitfalls
    // Don't run them as they're risky, just see these visually
    //..................Uninitialized pointers

    // // // int *int_ptr; // pointing anywhere !!
    // // // *int_ptr = 100; // Hopefully a crash !!

    */

    /*//==========================================\\\ References
    //.........................................|| Using references in range-based for loop


    // Example without references
    vector <string> friends {"Daniel", "Jack", "Billy"};

    for (string person: friends)
        person = "Funny"; // changes just the copy

    for (string person: friends)
        cout << person << " "; // Daniel Jack Billy

    // Example with reference
    vector <string> friends {"Daniel", "Jack", "Billy"};

    for (string &person: friends)
        person = "Funny"; // changes the actual vector data !!

    for (string person: friends)
        cout << person << " "; // Funny Funny Funny


    // // Example with reference and consts
    // vector <string> friends {"Daniel", "Jack", "Billy"};

    // for (string const &person: friends)
    //     person = "Funny"; // compiler error can't change it because it's read only now

    // for (string person: friends)
    //     cout << person << " "; // Funny Funny Funny

    //.........................................|| Using general references

    int num {100};
    int &ref {num};

    cout << num << endl; // 100
    cout << ref << endl; // 100

    num = 200;
    cout << num << endl; // 200
    cout << ref << endl; // 200
    */

    /*//==========================================\\\ L-Values, R-Values and L-References (Introduction)

    //.........................................|| L-Values
    // int x {100}; // x is an l-value
    // x = 1000;
    // x = 1000 + 20;

    // string name; // name is an l-value
    // name = "Frank";

    //.............. What's not a L-Value?
    // 100 = x; // 100 is NOT an l-value
    // (1000 + 20) = x; // (1000 + 20) is NOT an l-value

    // string name_2;
    // name_2 = "Frank";
    // "Frank" = name; // "Frank" is NOT an l-value


    //.........................................|| R-Values (v value that's not an L-value)

    // int y {100}; // 100 is an R-value
    // int z = y + 200; // (y+200) is an R-value

    // string name_3;
    // name_3 = "Frank"; // "Frank" is an R-Value

    // int max_num = max(20,30); // max(20, 30) is an R-value

    //.........................................|| L-Value References

    // int x {100};

    // int &ref1 = x; // ref1 is reference to L-Value
    // ref1 = 1000;

    // int &ref2 = 100; // Error, 100 is an R-Value

    // int num {10};
    // square(num); // OK
    // square(5); // Error - Can't reference R-Value 5
    */

    //==========================================\\\ OOP (Object-Oriented Programming)
    /*//.........................................|| Declaring a Class and Creating Objects

    Player frank;
    Player hero;

    Player *enemy = new Player(); // pointer to dynamically created object
    delete enemy;

    Account *johns_account = new Account();
    delete johns_account;

    Account franks_account;
    Account jims_account;

    Account accounts[]{franks_account, jims_account};

    vector<Account> accounts1{franks_account};
    accounts1.push_back(jims_account);
    */
    /*//.........................................|| Accessing Class Members - Dot and Arrow Operators)

    Account bills_account;

    cout << bills_account.balance << endl;
    // bills_account.deposit(1000.0);  // doesn't work yet because func. undefined

    Account *stephens_account = new Account;

    cout << (*stephens_account).balance << endl; // 0 // or
    cout << stephens_account->balance << endl;   // 0

    // (*stephens_account).deposit(1000.0); // doesn't work yet because func. undefined
    // stephens_account->deposit(1000.0); // doesn't work yet because func. undefined

    stephens_account->balance = 1000;
    cout << (*stephens_account).balance << endl; // 1000
    cout << stephens_account->balance << endl;   // 1000
    delete stephens_account;

    Player kevin;
    kevin.name = "Kevin";
    kevin.health = 100;
    kevin.xp = 5;
    kevin.talk("I'm dead"); // Kevin says I'm dead

    Player *ashley = new Player;
    (*ashley).name = "Ashley";
    ashley->health = 84;
    cout << "Is ashley alive?: " << ashley->is_dead() << endl;
    ashley->xp = 32;
    ashley->talk("Hello there!"); // Ashley says Hello there!
    ashley->health = 0;
    cout << "Is ashley alive?: " << ashley->is_dead() << endl;

    delete ashley;

    Account bells_account;
    bells_account.balance = 1000.0;
    bells_account.deposit(250.0);

    cout << bells_account.balance << endl; // 1250

    bells_account.withdraw(500.0);
    cout << bells_account.balance << endl; // 750
    */
    /*//------------------------------------------|| Class Member Access Modifiers - Public and Private

    Knight default_knight;
    // default_knight.specialty = "Archer"; // Error - inaccessable
    // default_knight.weapon = "Compound Bow"; // Error - inaccessable
    default_knight.print_info();

    // cout << default_knight.weapon << endl; // Error - inaccessable, can't even print !!
    // Knight Dimitri (26) is a/an Barbarian who uses a Sword.

    default_knight.change_weapon("Compound Bow");

    default_knight.print_info();
    // Knight Dimitri (26) is a/an Barbarian who uses a Compound Bow.
    */

    //------------------------------------------|| Implementing Member Methods
    /*//------------------------------------------| Inside the Class Declaration

    Bank_Account my_acc;

    cout << "Current balance is: " << my_acc.get_balance() << endl; // 0
    my_acc.set_balance(1324.98);
    cout << "New balance is: " << my_acc.get_balance() << endl; // 1324.98
    */
    /*//------------------------------------------| Separate File Declaration
    HBank_Account h_account;

    cout << "Current balance is: " << h_account.get_balance_hb() << endl; // 0
    h_account.set_balance_hb(521.45);
    cout << "New balance is: " << h_account.get_balance_hb() << endl; // 521.45
    */

    //------------------------------------------|| Constructors and Destructors
    //------------------------------------------| Creating Objects with Constructor and Destructors

    /*
    {
        Player slayer;
        Player frank{"Frank", 100, 4};
        Player hero{"Hero"};
        Player villain{"Villain"};
        // use the objects
        // 4 destructors called automatically
    }

    Player *enemy = new Player{"Enemy", 1000, 0};
    delete enemy; // destructor is called automatically after delete


    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    // Destructor auto-called for Slayer

    {
        Player frank;
        frank.set_name("Frank");

        Player hero("Hero");
        hero.set_name("Hero");

        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    // Destructor auto-called for frank, hero, villain

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    delete enemy;
    // Destructor auto-called for enemy

    Player *level_boss = new Player("Level Boss", 100, 35);
    (*level_boss).set_name("Defeated Boss");

    delete level_boss;
    */

    /*//------------------------------------------| Default Constructor (No-args constructor)

    Account frank_account;
    Account jim_account;

    Account *mary_account = new Account;
    delete mary_account;
    */

    /*//------------------------------------------| Class with a no default constructor but with a custom constructor

    Account frank_account; // Error, no default constructor !!
    Account jim_account; // Error, no default constructor !!

    Account *mary_account = new Account; // Error, no default constructor !!
    delete mary_account;

    Account bill_account {"Bill", 124.25}; // OK
    */

    /*//------------------------------------------| Delegating Constructors

    Player empty;
    Player lucy ("Lucy");
    Player frank ("Frank", 100, 50);
    */

    /*//------------------------------------------| Constructor Parameters and Default Values
    Player empty; // None, 0, 0
    Player frank{"Frank"}; // Frank, 0, 0
    Player villain{"Villain", 100, 55}; // Villain, 100, 55
    Player hero {"Hero", 100}; // Hero, 100, 0
    // Player bob {100, 50}; // ERROR, no constructor for this // This is the limitation
    */

    //------------------------------------------| Copy Constructor
    //------------------------------------------_Use Cases
    /*//------------------------------------------ Pass by value

    Player hero {"Hero", 100, 20};

    cout << "(Outside function) Player's initial health:" << endl;
    hero.Player_display_health(); // // 100

    display_and_kill_player(hero);

    cout << "(Outside function) Player's health after killing him in the function:" << endl;
    hero.Player_display_health(); // still 100, didn't change globally
    */

    /*//------------------------------------------ Return object by value

    Player enemy {create_super_enemy()}; // returns created Player object BY COPYING

    cout << "Name of the enemy: " << enemy.info_name() << endl; // 1000
    cout << "Health of enemy: " << enemy.info_health() << endl; // 1000
    cout << "XP of enemy: " << enemy.info_xp() << endl; // 1000
    */

    /*//------------------------------------------ Constructing one object based on another
    Player hero {"Hero", 100, 100};
    Player clone_hero {hero}; // A copy of hero is made

    cout << "Name of the clone is: " << clone_hero.info_name() << ", health: " << clone_hero.info_health() << ", xp: " << clone_hero.info_xp() << endl;
    */

    /*//------------------------------------------_Declaring and Using Copy Constructor

    Player empty;
    display_player(empty); // a copy of Player object (empty) is made, execution of this calls the copy constructor
    // Outputs
    // 3-args constructor is called
    // Custom copy constructor is called, made copy of: None
    // Name: None, health: 0, XP: 0
    // Destructor is called for: None

    Player clone_empty {empty};
    // Custom copy constructor is called, made copy of: None
    // -- Notice that 3 args constructor isn't called !!
    // It would have been called if we used the delegation mechanism in the copy constructor !!

    Player frank ("Frank");
    display_player(frank);
    // 3-args constructor is called
    // Custom copy constructor is called, made copy of: Frank
    // Name: Frank, health: 0, XP: 0
    // Destructor is called for: Frank

    Player hero ("Hero", 100);
    display_player(hero);
    // 3-args constructor is called
    // Custom copy constructor is called, made copy of: Hero
    // Name: Hero, health: 100, XP: 0
    // Destructor is called for: Hero


    Player villain ("Villain", 100, 55);
    display_player(villain);
    // 3-args constructor is called
    // Custom copy constructor is called, made copy of: Villain
    // Name: Villain, health: 100, XP: 55
    // Destructor is called for: Villain

    // After the main function ends:
    // Destructor is called for: Villain
    // Destructor is called for: Villain
    // Destructor is called for: Hero
    // Destructor is called for: Frank
    // Destructor is called for: None
    */

    /*//------------------------------------------_ Shallow Copying with the Copy Constructor

    Shallow obj1 {100};
    display_shallow(obj1);
    // Outputs
    // Copy constructor - shallow
    // 100
    // Destructor freed data after first exit from display_shallow function

    obj1.set_data_value(1000);
    // This is done successfully, too

    Shallow obj2 {obj1}; // now we got 2 objects pointing to invalid data
    obj2.set_data_value(1500); // Also changes obj1's data to 1500 since they both point to same locaation
    cout << "Hello world" << endl;
    // New value set code executed
    // Copy constructor - shallow
    // Hello world

    // After main function ends, destructor can't erase the obj1 and obj2
    // because the datas in the pointed locations are already destroyed by the destructor
    // and they are invalid memory now.
    */

    /*//------------------------------------------_ Deep Copying with the Copy Constructor
    Deep obj1 {100};
    display_deep(obj1); // 100 at different memory address than the lower

    Deep obj2 {obj1};
    obj2.set_data_value(1000); // 1000 at different memory address than the upper (change to 1000 didn't affect obj1, contrary to shallow copying that uses the same address for each copy)
    */

    //------------------------------------------| Move Constructor
    /*//------------------------------------------_ L-Value References

    int x {100}; // X is an L-Value
    int &l_ref = x; // Since X is an L-Value, l_ref is an L-Value Reference

    cout << x << endl; // 100
    cout << l_ref << endl; // 100
    cout << &x << endl; // 0x5ffe48
    cout << &l_ref << endl; // 0x5ffe48

    l_ref = 10; // change x to 10

    cout << x << endl; // 10
    cout << l_ref << endl; // 10
    cout << &x << endl; // 0x5ffe48
    cout << &l_ref << endl; // 0x5ffe48
    */

    /*//------------------------------------------_ R-Value References

    int &&r_ref {200}; // R-value reference
    r_ref = 300;

    cout << r_ref << endl; // 300
    cout << &r_ref << endl; // 0x5ffe44

    int y {500};
    // int &&x_ref = y; // Compiler error, can't assign L-Value to an R-value reference
    */

    /*//------------------------------------------_ L-Value Reference Parameters
    int x{100}; // x is an l-value
    func(x);    // input is an L-Value, no problem
    func(200);  // input is an R-Value, ERROR !!
    */

    /*//------------------------------------------_ R-Value Reference Parameters
    int x {100};
    // func(x); // ERROR - X is an L-value
    func(200); // OK, 200 is an R-Value
    */

    /*//------------------------------------------_ Overloaded L-Value and R-Value Reference Parameters

    int x{100};

    func(x);   // Calls the overloaded function's first variant with L-value parameters
    func(200); // Calls the overloaded function's second variant with R-value parameters
    */

    /*//------------------------------------------_ Using Move Constructors

    vector<Move> vec;

    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    vec.push_back(Move{90});
    */

    /*//------------------------------------------| Using const with Classes
    const Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};

    //villain.set_name("Super Villain"); // ERROR, can't change because of const object
    cout << villain.get_name() << endl; // No error since we provided const ensurance that tells the compiler we won't do any changes to the object inside of getter function
    cout << hero.get_name() << endl; // Works as usual since it's not a const object

    display_player_name(villain); // OK
    display_player_name(hero); // OK
    */

    /*//------------------------------------------| Static Class Members
    display_active_player_count(); // 0
    Player sam {"Sam", 50, 2};
    display_active_player_count(); // 1
    Player molly {"Molly"};
    display_active_player_count(); // 2

    {
        Player frank {"Frank"};
        display_active_player_count(); // 3
        // frank is destroyed when leaving the scope
    }

    display_active_player_count(); // 2

    Player *enemy = new Player("Enemy", 100, 100);
    display_active_player_count(); // 3
    delete enemy;
    display_active_player_count(); // 2

    */

    /*//------------------------------------------| Structs vs Classes
    c_Person p;
    p.name = "Frank";           // compiler error - private
    std::cout << p.get_name(); // compiler error - private

    s_Person ps;
    ps.name = "Frank";          // OK - public
    std::cout << ps.get_name(); // OK - public
    */

    /*//------------------------------------------| Friends of a Class

    Player kemal {"Kemal", 500, 100};
    display_player(kemal);
    */

    //==========================================\\\ Operator Overloading
    /*//------------------------------------------|| What is operator overloading
    Mystring empty;          // no args constructor
    Mystring larry("Larry"); // overloaded constructor
    Mystring stooge{larry};  // copy constructor

    empty.display();  // : 0
    larry.display();  // Larry : 5
    stooge.display(); // Larry : 5
    */

    /*//------------------------------------------|| Overloading the Assignment Operator - Copy

    Mystring a{"Hello"};  // Overloaded constructor
    Mystring b;           // No-args constructor
    b = a;                // copy assignment
                          // b.operator = (a)
    b = "This is a test"; // b.operator = ("This is a test")

    Mystring empty;          // no args constructor
    Mystring larry("Larry"); // overloaded constructor
    Mystring stooge{larry};  // copy constructor
    Mystring stooges;        // no-args constructor

    empty = stooge; // copy assignment operator

    empty.display();  // Larry : 5
    larry.display();  // Larry : 5
    stooge.display(); // Larry : 5

    stooges = "Larry, Moe and Curly";
    stooges.display(); // Larry, Moe and Curly : 21

    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    std::cout << "==== Loop 1 ==============" << std::endl;
    for (const Mystring &s : stooges_vec)
        s.display(); // Larry
                     // Moe
                     // Curly

    std::cout << "==== Loop 2 ==============" << std::endl;
    for (Mystring &s : stooges_vec)
        s = "Changed"; // copy assignment

    std::cout << "==== Loop 3 ==============" << std::endl;
    for (const Mystring &s : stooges_vec)
        s.display(); // Changed
                     // Changed
                     // Changed
    */

    /*//------------------------------------------|| Overloading the Assignment Operator - Move

    Mystring a{"Hello"};
    a = Mystring{"Hola"};
    a = "Bonjour";

    Mystring empty;          // no args constructor
    Mystring larry("Larry"); // overloaded constructor
    Mystring stooge{larry};  // copy constructor // copy constructor is used instead of move assignment since larry is an l-value ????
    Mystring stooges;        // no-args constructor

    empty = stooge; // copy assignment operator
                    // because stooge is an l-value

    empty = "Funny"; // Move assignment operator
                     // because "Funny" is an r-value

    empty.display();  // Larry : 5
    larry.display();  // Larry : 5
    stooge.display(); // Larry : 5

    stooges = "Larry, Moe and Curly";
    stooges.display(); // Larry, Moe and Curly : 21

    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry"); // Move constructor
    stooges_vec.push_back("Moe");   // Move constructor
    stooges_vec.push_back("Curly"); // Move constructor

    std::cout << "==== Loop 1 ==============" << std::endl;
    for (const Mystring &s : stooges_vec)
        s.display(); // Larry
                     // Moe
                     // Curly

    std::cout << "==== Loop 2 ==============" << std::endl;
    for (Mystring &s : stooges_vec)
        s = "Changed"; // copy assignment

    std::cout << "==== Loop 3 ==============" << std::endl;
    for (const Mystring &s : stooges_vec)
        s.display(); // Changed
                     // Changed
                     // Changed

    */

    /*//------------------------------------------|| Overloading Operators as Member Functions

    cout << boolalpha << endl;
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display(); // Larry
    moe.display();   // Moe

    cout << (larry == moe) << endl;    // false
    cout << (larry == stooge) << endl; // true

    larry.display(); // Larry
    Mystring larry2 = -larry;
    larry2.display(); // larry

    Mystring stooges = larry + "Moe"; // ok with member function
    // Mystring stooges = "Larry" + moe;    // compiler error // neither of them is an element of Mystring object

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display(); // Moe Larry

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display(); // Moe Larry Curly
    */

    /*//------------------------------------------|| Overloading Operators as Global (Non-Member) Functions

    Mystring larry{"LArrY"};
    larry.display(); // LArrY

    larry = -larry;
    larry.display(); // larry

    std::cout << boolalpha << std::endl;
    Mystring moe{"Moe"};
    Mystring stooge = larry;

    std::cout << (larry == moe) << std::endl;    // false
    std::cout << (larry == stooge) << std::endl; // true

    Mystring stooges = larry + "Moe";
    stooges.display();                  // larryMoe
    Mystring stooges2 = "Joe" + (-moe); // Now OK with non-member functions
    stooges2.display();                 // Joemoe

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display(); // Moe Larry

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display(); // Moe larry Curly

    // Mystring strangers = "Jack" + "Molly" + "Dutch"; // won't work since it expects at least 1 valid object
    Mystring strangers = "Jack" + moe + "Molly" + "Dutch"; // But this'll work
    strangers.display(); // JackMoeMollyDutch
    */

    /*//------------------------------------------|| Overloading the Stream Insertion and Extraction Operators

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    std::cout << "Enter the third stooge's first name: ";
    std::cin >> curly;

    std::cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << std::endl;

    std::cout << "\n Enter the three stooges names separated by a space: ";
    std::cin >> larry >> moe >> curly;

    std::cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << std::endl;
    */

    /*//------------------------------------------|| Inheritance - Deriving Classes from Existing Classes

    std::cout << "\n=== Account ==================================" << std::endl;

    Account acc {};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    std::cout << std::endl; // Let's do the same with pointers

    Account *p_acc {nullptr};
    p_acc = new Account{};
    p_acc->deposit(1000.0);
    (*p_acc).withdraw(250.0);

    delete p_acc;

    std::cout << "\n=== Savings Account ==================================" << std::endl;

    Savings_Account sav_acc {};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);

    std::cout << std::endl;

    Savings_Account *p_sav_acc {nullptr};
    p_sav_acc = new Savings_Account {};

    p_sav_acc->deposit(1000.0);
    (*p_sav_acc).withdraw(250.0);

    delete p_sav_acc;
    */

    /*//------------------------------------------|| Inheritance - Inheritance Types - Public, Protected and Private Inheritance

    std::cout << "==== Base member access from base objects =========" << std::endl;
    Base base_obj;
    base_obj.a = 100; // OK since a is public
    // base_obj.b = 200; // ERROR INACCESSIBLE
    // base_obj.c = 300; // ERROR INACCESSIBLE

    std::cout << "==== Base member access from derived objects =========" << std::endl;

    Derived derived_obj;
    derived_obj.a = 150; // OK since a is public
    // derived_obj.b = 300; // ERROR INACCESSIBLE
    // derived_obj.c = 450; // ERROR INACCESSIBLE
    derived_obj.change_private_parts_of_parent(500);
    */

    /*//------------------------------------------|| Inheritance - Constructors and Destructors

    Base b1;
    Base b2 {100};

    Derived d1;
    Derived d2 {150};
    */

    /*//------------------------------------------|| Inheritance - Passing Arguments to Base Class Contructors
    Derived d1;
    Derived d2 {1000};
    */

    /*//------------------------------------------|| Inheritance - Copy and Move Constructors and Assignments

    // Base b{100};    // Overloaded constructor
    // Base b1{b};     // Copy constructor
    // b = b1;         // Copy assignment

    Derived d{100}; // Overloaded constructor
    Derived d1{d};  // Copy constructor

    Derived d2{400};
    d = d2;         // Copy assignment
    */

    /*//------------------------------------------|| Inheritance - Redefining Base Class Methods

    std::cout << "\n====== Account class ============" << std::endl;
    Account a1{1000};
    std::cout << a1 << std::endl; // Account balance: 1000

    a1.deposit(500.0);
    std::cout << a1 << std::endl; // Account balance: 1500

    a1.withdraw(600.0);
    std::cout << a1 << std::endl; // Account balance: 900

    a1.withdraw(2000.0);          // Insufficient funds
    std::cout << a1 << std::endl; // Account balance: 900

    std::cout << "\n====== Savings Account class ============" << std::endl;

    Savings_Account s1{1000, 5.0};
    std::cout << s1 << std::endl; // Savings Account balance: 1000, interest rate: 5

    s1.deposit(1000);
    std::cout << s1 << std::endl; // Savings Account balance: 2050, interest rate: 5

    s1.withdraw(2000);
    std::cout << s1 << std::endl; // Savings Account balance: 50, interest rate: 5

    s1.withdraw(1000);            // Insufficient funds
    std::cout << s1 << std::endl; // Savings Account balance: 50, interest rate: 5
    */


    //------------------------------------------------END OF MAIN (+return 0)--------------------------------
    return 0;
}

//-----------------------------------------Function Declarations below
/*/ / .........................................Pass by Value

        void
        f_pass_by_value_1(int num)
    {
        num = 1000;
    }
    */

/*//.........................................Default Arguments

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello" << " " << prefix << " " << name << " " << suffix << endl;
}
*/

/*//...........................................Function Overloading
void print(int num)
{
    cout << "Printing int: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(string s, string t)
{
    cout << "Printing string 1: " << s << ", string 2: " << t << endl;
}

void print(vector <string> v)
{
    cout << "Printing vector of strings: ";
    for (auto s: v)
    {
        cout << s + " ";
    }
    cout << endl;
}

// void print(string num)
// {
//     cout
// }

*/

/*//...........................................Passing Arrays into Functions
void print_array(const int array[], size_t array_size) // prevent changes in the array by making the parameter constant
{
    cout << "Printing array elements" << endl;
    for (size_t i {0}; i < array_size; i++)
    {
        // array[i] = 500; // error, can't change it because it's a constant
        cout << "Element " << i << ": " << array[i] << endl;
    }
}
*/

/*//...........................................Passing Vectors into Functions
void print_vector(vector <int> array)
{
    cout << "Printing vector elements" << endl;
    for (size_t i {0}; i < array.size(); i++)
    {
        cout << "Element " << i << ": " << array[i] << endl;
    }
}
*/

/*//...........................................Pass by Reference

void scale_number(int &num) // notice the ampersand (&) sign. We only use it in parameter section.
{
    if (num > 100)
        num = 100;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void vector_organizer_1(vector<int> v)
{
    // for (auto num: v) // Doesn't work properly, don't use this until you learn properly
    // {
    //     v.at(num) = 2;
    // }

    for (size_t i{}; i < v.size(); i++)
        v.at(i) = 2;

    cout << "Elements after changing the vector v1 (inside func): ";
    for (auto element : v)
        cout << element << " ";

    cout << endl;
}

void vector_organizer_2(vector<int> &v)
{
    for (size_t i{}; i < v.size(); i++)
        v.at(i) = 2;

    cout << "Elements after changing the vector v2 (inside func): ";
    for (auto element : v)
        cout << element << " ";

    cout << endl;
}

void print_constant_example(const vector<int> &v)
{
    cout << "Elements in the vector: ";
    for (auto element : v)
        cout << element << " ";

    // v.at(3) = 0; // Gives compiler error because vector items are constants here

    cout << endl;
}

void clear_vector(vector <string> &v)
{
    v.clear();
}
*/

/*//...........................................Scope Rules - Static - Global

void global_example()
{
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    // 1st call: 300, 2nd: 600, 3rd: 1200, 4th: 2400

    num = num * 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
    // 1st call 600, 2nd: 1200, 3rd: 2400 4th: 4800

    // It changes the global variable's value which is declared at the most outer scope,
    // like a pass by reference example.

}

void static_local_example()
{
    static int num {5000};
    cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
    // 1st call: 5000, 2nd: 6000, 3rd: 7000, 4th: 8000, 5th: 9000
    num += 1000;
    cout << "Local static num is: " << num << " in static_local_example - end" << endl;
    // 1st call: 6000, 2nd: 7000, 3rd: 8000, 4th: 9000, 5th: 10000
}

*/

/*//...........................................Function Calls - Stack Operations

int func1 (int a, int b)
{
    int result {};
    result = a + b;
    func2(result, a, b);
    return result;
}

void func2 (int &x, int y, int z)
{
    x += y + z;
}
*/

/*//...........................................Inline Functions
inline int add_numbers(int a, int b)
{
    return a + b;
}
*/

/*//...........................................Recursive Functions
unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1) // These base cases what stops the recursion
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

double a_penny_doubled_everyday(int n, double amount)
{
    // total_amount at the end = (total_amount * 2^(n-1))

    if (n <= 1)
        return amount;

    return a_penny_doubled_everyday(--n, amount * 2);
}
*/

/*//.........................................|| Passing Pointers to Functions
void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

void display(const vector<string> *const v)
{
    for (auto element : *v)
    {
        cout << element << " ";
    }

    // another algorithm to do the same

    for (size_t i{}; i < ((*v).size()); i++)
    {
        cout << (*v).at(i) << " "; // by *v, we accessed the vector's content
    }
}

void display(const vector<int> *const v, int sentinel) // notice the function overloading
{
    for (auto element : *v)
    {
        if (element == sentinel)
            break;

        cout << element << " ";
    }
}

void display(const int *arr, int sentinel)
{
    while (*arr != sentinel)
        cout << *arr++ << " "; // first dereference and show it, then increment the arr pointer to the next element
    cout << endl;
}

int find_max_element(int *arr, int size)
{
    int max_element{arr[0]};

    for (int i{}; i < size; i++)
    {
        if (arr[i] > max_element)
            max_element = arr[i];
    }
    return max_element;
}

void reverse_array(int *arr, int size)
{
    // 1 2 3 4 5

    // arr[i] = arr[i] (1) + arr[j] (5) = 6
    // arr[j] (hedef 1) = arr[i] (6) - arr[j] (5) = 1
    // arr[i] (hedef 5) = arr[i] (6) - arr[j] (1) = 5

    // 5 4 3 2 1

    for (int i{}, j{size - 1}; i < j; i++, j--)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }
}

string reverse_string(const string &str)
{
    string reversed;

    for (int i{(str.length()) - 1}; i >= 0; i--)
    {
        reversed.push_back(str[i]);
        // reversed += str[i]; // alternative
    }

    return reversed;

    // // Another approach

    // const char* start = str.c_str();                    // Pointer to the first character
    // const char* end = str.c_str() + str.size() - 1;     // Pointer to the last character

    // while (end >= start)
    // {
    //     reversed.push_back(*end);   // Append the character at the end pointer to the reversed string
    //     end--;
    // }

    // return reversed;

}

*/

/*//.........................................|| Returning a Pointer from a Function
const int *largest_int (const int *const int_ptr1, const int *const int_ptr2)
{
    if (*int_ptr1 > *int_ptr2)
        return int_ptr1;
    else
        return int_ptr2;
}
*/

/*//.........................................|| Returning Dynamically Allocated from a Function

int *create_array(size_t size, int init_value)
{
    int *new_storage{new int[size]};

    for (size_t i{}; i < size; i++)
        *(new_storage + i) = init_value;

    return new_storage; // address of the first integer that we dynamically created
}

int *dont_do_this_1()
{
    int size{};

    //. . .

    return &size;
}

int *dont_do_this_2()
{
    int size{};
    int *int_ptr(&size);

    //. . .

    return int_ptr;
}

// In above 2 cases, the address that’s being returned is a stack variable or a function local variable. Very bad idea.
*/

//==========================================\\\ L-Values, R-Values and L-References (Introduction)
/*//.........................................|| L-Value References

int square (int &n)
{
    return n*n;
}
*/

//==========================================\\\ OOP Classes
/*//..........................................|| Functions Declared Outside of Classes
void Bank_Account::set_balance(double amount)
{
    balance = amount;
}

double Bank_Account::get_balance(void)
{
    return balance;
}
*/

//------------------------------------------|| Constructors and Destructors
//------------------------------------------| Copy Constructor
//------------------------------------------ Use Cases
/*//------------------------------------------ Pass by value

void display_and_kill_player(Player p)
{
    // p is a COPY of hero in this example

    // using p
    cout << "When player is healthy: " << endl;
    p.Player_display_health(); // 100
    p.Player_kill();
    cout << "After killing the player: " << endl;
    p.Player_display_health(); // 0

        // Then destructor of p will be called after out of scope
}
*/

/*//------------------------------------------ Return object by value
Player create_super_enemy(void)
{
    Player an_enemy{"Super Enemy",1000, 1000};
    return an_enemy;
}
*/

/*//------------------------------------------_Declaring and Using Copy Constructor

void display_player(Player p)
{cout << "Name: " << p.info_name() << ", health: " << p.info_health() << ", XP: " << p.info_xp() << endl;}
*/

/*//------------------------------------------_ Shallow Copying with the Copy Constructor

void display_shallow(Shallow object)
{
    cout << (object.Display_Data()) << endl;
}
*/

/*//------------------------------------------_ Deep Copying with the Copy Constructor
void display_deep(Deep s)
{
    cout << s.get_data_value() << endl;
}
*/

//------------------------------------------| Move Constructor
/*//------------------------------------------_ L-Value Reference Parameters
void func(int &num) {num *= 2;}
*/

/*//------------------------------------------_ R-Value Reference Parameters
void func(int &&num) {num *= 2;} // Expects R-value parameter (&&)
*/

/*//------------------------------------------_ Overloaded L-Value and R-Value Reference Parameters
void func(int &num) { cout << "L-valued one called" << endl; }
void func(int &&num) { cout << "R-valued one called" << endl; }
*/

/*//------------------------------------------| Using const with classes
void display_player_name(const Player &p)
{
    cout << p.get_name() << endl;
}
*/

/*//------------------------------------------| Static Class Members
void display_active_player_count(void)
{
    cout << "Active player count: " << Player::get_num_players() << endl;
}
*/

/*//------------------------------------------| Friends of a Class
void display_player(Player &p) // doesn't neet getter/setter functions since it's a friend and it can directly access to private members of the class
{
    std::cout << "Hello, i'm " << p.name << ", i've got " << p.health << " health and " << p.xp << " xp." << std::endl;
}
*/
