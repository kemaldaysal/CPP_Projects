#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>

class Student
{
private:
    std::string name;
    std::string answer;
    size_t score;

public:
    Student(std::string name="Default Name", std::string answer="NNNNN", size_t score=0);
    ~Student() = default;

    void assign_answer(std::string answer);
    void increase_score();
    size_t return_students_score();
};

#endif