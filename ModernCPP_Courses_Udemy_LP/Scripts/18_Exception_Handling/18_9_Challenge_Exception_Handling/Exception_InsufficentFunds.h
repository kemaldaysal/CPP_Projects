#ifndef _EXCEPTION_INSUFFICENTFUNDS_H_
#define _EXCEPTION_INSUFFICENTFUNDS_H_

#include <exception>

class Exception_InsufficentFunds : public std::exception
{
public:
    Exception_InsufficentFunds() noexcept = default;
    ~Exception_InsufficentFunds() = default;

    virtual const char *what() const noexcept;
};

#endif