#include "Exception_MaxWithdrawalsReached.h"

const char *Exception_MaxWithdrawalsReached::what() const noexcept
{
    return ("Exception - Max withdrawals reached");
}