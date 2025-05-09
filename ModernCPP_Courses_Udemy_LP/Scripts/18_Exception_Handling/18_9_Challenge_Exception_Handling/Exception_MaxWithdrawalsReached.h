#ifndef _EXCEPTION_MAXWITHDRAWALSREACHED_H_
#define _EXCEPTION_MAXWITHDRAWALSREACHED_H_

#include <exception>

class Exception_MaxWithdrawalsReached : public std::exception
{
public:
    Exception_MaxWithdrawalsReached() noexcept = default;
    ~Exception_MaxWithdrawalsReached() = default;

    virtual const char* what() const noexcept; 
};


#endif