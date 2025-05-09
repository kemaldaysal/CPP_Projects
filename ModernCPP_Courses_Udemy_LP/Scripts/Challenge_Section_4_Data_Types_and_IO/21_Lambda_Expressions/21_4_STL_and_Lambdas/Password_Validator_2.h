#ifndef _PASSWORD_VALIDATOR_2_
#define _PASSWORD_VALIDATOR_2_

#include <iostream>
#include <vector>

class Password_Validator_2
{
    std::vector<char> restricted_symbols {'$', '!', '+'};
public:
    bool is_valid(const std::string &password);
};

#endif