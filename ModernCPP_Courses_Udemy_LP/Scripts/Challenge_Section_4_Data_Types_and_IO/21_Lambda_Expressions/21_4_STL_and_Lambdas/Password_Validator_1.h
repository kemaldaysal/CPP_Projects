#ifndef _PASSWORD_VALIDATOR_1_
#define _PASSWORD_VALIDATOR_1_

#include <iostream>

class Password_Validator_1
{
    char restricted_symbol{'$'};

public:
    bool is_valid(const std::string &password);
};

#endif