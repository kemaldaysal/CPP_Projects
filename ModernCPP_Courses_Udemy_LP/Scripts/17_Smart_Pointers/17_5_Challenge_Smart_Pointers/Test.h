#ifndef _TEST_H_
#define _TEST_H_

#include <iostream>
#include <memory>
#include <vector>

class Test {
private:
    int data;
public:
    Test();
    Test(int data);
    int get_data() const;
    ~Test();
};

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, size_t num);
void display(const std::vector<std::shared_ptr<Test>>&vec);

#endif