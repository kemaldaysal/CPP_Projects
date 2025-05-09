/* // NOTE SECTION

To Do:
There is a big difference between Pre-Increment and Post-Increment operators and you haven't used them.
You can create 2 more overloaded operators using them.
The trick when implementing post increment operator is important. And it's input placeholder must be remembered.


*/


// #include "Mystring.h"
#include "Mystring_non_member.h"

int main(void)
{
    Mystring jack{"Jack"};
    Mystring joe{"Joe"};
    Mystring clone_of_jack{"Jack"};

    std::cout << "Is jack same as joe ? : " << (jack == joe) << std::endl;
    std::cout << "Is jack same as it's clone? : " << (jack == clone_of_jack) << std::endl;

    std::cout << jack << joe << clone_of_jack << std::endl;

    Mystring lara{"LaRa"};

    Mystring n_lara = --lara;
    std::cout << "Original lara: " << lara << ", negative lara: " << n_lara << std::endl;

    std::cout << "Uppercase lara: " << ++lara << std::endl;

    std::cout << "Is jack lexically before joe?: " << (jack < joe) << std::endl;
    std::cout << "Is jack lexically after joe?: " << (jack > joe) << std::endl;

    std::cout << "Concatenation of lara (lowercase), jack (uppercase), joe with spaces: " << ((--lara) + " " + (++jack) + " " + joe) << std::endl;

    std::cout << "LHS concat. of lara and jack: " << (jack += lara) << std::endl;

    Mystring triple_lara{lara * 3};

    std::cout << "triple lara: " << triple_lara << std::endl;

    std::cout << "quadruple jack with *= 4: " << (jack *= 4) << std::endl;

    return 0;
}