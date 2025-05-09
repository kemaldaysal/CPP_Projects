#ifndef _EXCEPTION_ILLEGALBALANCE_H_
#define _EXCEPTION_ILLEGALBALANCE_H_

#include <exception>

class Exception_IllegalBalance : public std::exception
{
public:
    Exception_IllegalBalance() noexcept = default;
    ~Exception_IllegalBalance() = default; // already noexcept by default

    virtual const char *what() const noexcept; // returns c-style string
};

#endif