#ifndef _STUDENTS_H_
#define _STUDENTS_H_

#include <iostream>
#include <iomanip>
#include <vector>

#include "Student.h"

class Students
{
public:
    std::vector<Student> vec;
    size_t student_count;

    Students();
    ~Students()=default;
};

#endif