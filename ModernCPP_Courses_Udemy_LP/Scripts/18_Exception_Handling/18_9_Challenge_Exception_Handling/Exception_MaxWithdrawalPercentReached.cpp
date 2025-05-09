#include "Exception_MaxWithdrawalPercentReached.h"

const char *Exception_MaxWithdrawalPercentReached::what() const noexcept
{
    return ("Exception - Max withdrawal percent reached");
}