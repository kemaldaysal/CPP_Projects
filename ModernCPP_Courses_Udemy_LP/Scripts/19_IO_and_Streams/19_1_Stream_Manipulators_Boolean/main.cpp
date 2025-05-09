// Section 19
// Stream Manipulators - Boolean
// boolalpha and noboolalpha

#include <iostream>
#include <iomanip> // must include for manipulators

int main()
{
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl; // 1
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl; // 0

    // set to true/false formatting
    std::cout << std::boolalpha;
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl; // true
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl; // false

    // toggle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl; // 1
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl; // 0

    // set back to true/false by using setf method
    std::cout.setf(std::ios::boolalpha);
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl; // true
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl; // false    

    // resets to default which is 0/1
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl; // 1
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl; // 0
    
    return 0;
}