#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

#include "Student.h"
#include "Students.h"
#include "Frontend_Functions.h"

int main()
{
    std::ifstream file{};
    // std::string line{};
    std::string answer{};
    std::string name{};
    std::string response{};
    double running_sum{};
    double avg{};
    const size_t ruler_length{20};

    file.open("responses.txt");

    if (!file)
    {
        std::cerr << "Error opening the file" << std::endl;
        return 1;
    }

    print_legend(ruler_length);
    print_ruler(ruler_length);

    std::getline(file, answer);

    Students students;

    // // v1 - More clear code below
    // for (size_t i{0}; (std::getline(file, line)); i++)
    // {

    //     if (i % 2 == 0) // lines with odd line number contains student name
    //     {
    //         students.vec.push_back(Student{line});
    //         students.student_count++;

    //         std::cout << std::setw(ruler_length/2) << std::left << line;
    //     }
    //     else // lines with even line number contains answers
    //     {
    //         students.vec.at(students.student_count - 1).assign_answer(line);
    //         for (size_t i{}; i < answer.length(); i++)
    //         {
    //             if (line[i] == answer[i])
    //             {
    //                 students.vec.at(students.student_count - 1).increase_score();
    //                 running_sum++;
    //             }
    //         }
    //         std::cout << std::setw(ruler_length/2) << std::right << students.vec.at(students.student_count - 1).return_students_score() << std::endl;
    //     }
    // }

    // v2
    while (file >> name >> response)
    {
        size_t temp_score{};

        for (size_t i{}; i < answer.length(); i++)
        {
            if (response[i] == answer[i])
            {
                ++temp_score;
                ++running_sum;
            }
        }

        students.vec.push_back(Student{name, response, temp_score});
        students.student_count++;

        std::cout << std::setw(ruler_length / 2) << std::left << name;
        std::cout << std::setw(ruler_length / 2) << std::right << temp_score << std::endl;
    }

    if (students.student_count != 0)
        avg = running_sum / students.student_count;

    print_ruler(ruler_length);
    std::cout << std::left << "Average score";
    std::cout << std::setw(7) << std::right << std::fixed << std::setprecision(3) << avg << std::endl;

    file.close();

    return 0;
}
