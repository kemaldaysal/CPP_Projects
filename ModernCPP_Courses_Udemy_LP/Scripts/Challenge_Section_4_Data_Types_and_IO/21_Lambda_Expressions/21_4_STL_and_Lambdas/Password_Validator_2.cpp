#include "Password_Validator_2.h"

bool Password_Validator_2::is_valid(const std::string &password)
{

    return (std::all_of(password.begin(), password.end(), [this](const char &c)
                        { return std::none_of((this->restricted_symbols).begin(), (this->restricted_symbols).end(), [c](const char &restricted_symbol)
                                              { return (c == restricted_symbol); }); }));
}