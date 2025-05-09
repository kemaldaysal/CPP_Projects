#include "Password_Validator_1.h"

bool Password_Validator_1::is_valid(const std::string &password)
{
    return (std::all_of(password.begin(), password.end(), [this] (const char &c){
        return (c != this->restricted_symbol);
    }));
}
