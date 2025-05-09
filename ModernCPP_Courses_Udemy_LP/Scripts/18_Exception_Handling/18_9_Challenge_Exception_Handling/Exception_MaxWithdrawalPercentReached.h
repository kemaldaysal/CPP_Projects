#ifndef _EXCEPTION_MAXWITHDRAWALPERCENTREACHED_H_
#define _EXCEPTION_MAXWITHDRAWALPERCENTREACHED_H_

#include <exception>

class Exception_MaxWithdrawalPercentReached : public std::exception
{
public:
    Exception_MaxWithdrawalPercentReached() noexcept = default;
    ~Exception_MaxWithdrawalPercentReached() = default;

    virtual const char *what() const noexcept;
};

#endif