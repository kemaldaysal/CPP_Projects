#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <functional>

// Used for test8
class Person
{
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);

private:
    std::string name;
    int age;

public:
    Person() = default;
    Person(std::string name, int age);
    Person(const Person &p) = default;
    ~Person() = default;
    std::string get_name() const;
    void set_name(std::string name);
    int get_age() const;
    void set_age(int age);

    std::function<void(std::string, int)> change_person1();
    std::function<void(std::string, int)> change_person2();
    std::function<void(std::string, int)> change_person3();

    // auto can't be used if this class declaration is not in the same folder where it's used. 

    // auto change_person1();
    // auto change_person2();
    // auto change_person3();
};

#endif