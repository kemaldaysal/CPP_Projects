#ifndef _LAMBDA_H_
#define _LAMBDA_H_

#include <iostream>

// Used for test9
// The closure class/struct created by lambda is very similar to this
class Lambda
{
private:
    int y;

public:
    Lambda(int y);
    void operator()(int x) const;
};

#endif