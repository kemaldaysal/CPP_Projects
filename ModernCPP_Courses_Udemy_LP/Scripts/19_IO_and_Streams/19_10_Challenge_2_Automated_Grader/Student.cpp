#include "Student.h"

Student::Student(std::string name, std::string answer, size_t score)
    : name{name}, answer{answer}, score{score} {}

void Student::assign_answer(std::string answer)
{
    answer = answer;
}

void Student::increase_score()
{
    ++score;
}

size_t Student::return_students_score()
{
    return score;
}