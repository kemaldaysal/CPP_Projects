#ifndef _TEST_CLASS_H_
#define _TEST_CLASS_H_

#include <iostream>
#include <memory>

class Test_Class {
private:
    int data;
public:
    Test_Class();
    Test_Class(int data);
    int get_data() const;
    ~Test_Class();
};

void func(std::shared_ptr<Test_Class> p);

#endif