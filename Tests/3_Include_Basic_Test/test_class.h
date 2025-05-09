#ifndef _TEST_CLASS_H
#define _TEST_CLASS_H

class Test_Class 
{
private:
    int x;

public:
    Test_Class(int x = 5);
    
    int get_x() const;
    void set_x(int x);

    ~Test_Class() = default;
};

#endif