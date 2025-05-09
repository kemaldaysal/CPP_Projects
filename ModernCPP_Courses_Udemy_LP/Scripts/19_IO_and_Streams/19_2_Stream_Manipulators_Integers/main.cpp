// Section 19
// Stream Manipulators - Integer
// dex, hex, oct, showbase uppercase, nouppercase, showpos

#include <iostream>
#include <iomanip> // must include for manipulators

int main()
{
    int num {255};
    // Displaying using different bases
    std::cout << "---------------------------" << std::endl;
    std::cout << std::dec << num << std::endl; // 255
    std::cout << std::hex << num << std::endl; // ff 
    std::cout << std::oct << num << std::endl; // 377

    // Displaying showing the base prefix for hex and oct
    std::cout << "---------------------------" << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl; // 255
    std::cout << std::hex << num << std::endl; // 0xff 
    std::cout << std::oct << num << std::endl; // 0377   

    // Display the hex value in uppercase
    std::cout << "---------------------------" << std::endl;
    std::cout << std::showbase << std::uppercase;
    std::cout << std::dec << num << std::endl; // 255
    std::cout << std::hex << num << std::endl; // 0XFF 
    std::cout << std::oct << num << std::endl; // 0377            

    // Display the + sign in front of positive base 10 numbers
    std::cout << "---------------------------" << std::endl;
    std::cout << std::showpos;
    std::cout << std::dec << num << std::endl; // +255 

    // setting using the set method
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    // resetting to defaults
    std::cout << "---------------------------" << std::endl;
    std::cout << std::resetiosflags(std::ios::basefield);
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::uppercase);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::hex << num << std::endl; // ff
    std::cout << std::resetiosflags(std::ios::basefield);

    // resetting to defaults - the other way
    std::cout << "---------------------------" << std::endl;
    std::cout << std::dec << std::noshowbase << std::nouppercase << std::noshowpos;
    std::cout << std::hex << num << std::endl; // ff
    std::cout << std::dec;

    return 0;
}