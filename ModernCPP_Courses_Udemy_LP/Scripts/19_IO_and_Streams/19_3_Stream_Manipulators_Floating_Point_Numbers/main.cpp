// Section 19
// Stream Manipulators - Floating Point Numbers
// scientific, setprecision, fixed, showpoint, showpos, uppercase

#include <iostream>
#include <iomanip> // must include for manipulators

int main()
{

    double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};

    // using default settings
    std::cout << "--Defaults ----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 123456 since def. precision is 6
    std::cout << num2 << std::endl; // 1234.56 ""
    std::cout << num3 << std::endl; // 1234 since noshowpoint (zeros) as default

    // Note how since we can't display in precision 2 scientific notation is used
    std::cout << std::setprecision(2);
    std::cout << "--Precision 2----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 1.2e+08 
    std::cout << num2 << std::endl; // 1.2e+03
    std::cout << num3 << std::endl; // 1.2e+03

    // Using precision 5
    std::cout << std::setprecision(5);
    std::cout << "--Precision 5----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 12345
    std::cout << num2 << std::endl; // 1234.6 // notice the rounding
    std::cout << num3 << std::endl; // 1234

    // Using precision 9
    std::cout << std::setprecision(9);
    std::cout << "--Precision 9----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 123456790 // rounded
    std::cout << num2 << std::endl; // 1234.5678
    std::cout << num3 << std::endl; // 1234

    // Using precision 3 and fixed
    std::cout << std::setprecision(3) << std::fixed; // notice fixed
    std::cout << "--Precision 3 - fixed ----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 123456789.988
    std::cout << num2 << std::endl; // 1234.568
    std::cout << num3 << std::endl; // 1234.000

    // Using precision  3, fixed and scientific notation
    // Note precision is after the decimal
    std::cout << std::setprecision(3) << std::scientific;
    std::cout << "--Precision 3 - scientific  ----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 1.235e+08
    std::cout << num2 << std::endl; // 1.235e+03
    std::cout << num3 << std::endl; // 1.234e+03

    // Same but display capital 'E' in scientific
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << "--Precision 3 - scientific - uppercase  ----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 1.235E+08
    std::cout << num2 << std::endl; // 1.235E+03
    std::cout << num3 << std::endl; // 1.234E+03

    // Show '+' symbol for positive numbers
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << "--Precision 3 - fixed - showpos ----------------------------" << std::endl;
    std::cout << num1 << std::endl; // +123456789.988
    std::cout << num2 << std::endl; // +1234.568
    std::cout << num3 << std::endl; // +1234.000

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);

    // Show trailing zeroes up to precision 10

    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << "-- precision 10 - showpoint ----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 123456790.0
    std::cout << num2 << std::endl; // 1234.567800
    std::cout << num3 << std::endl; // 1234.000000

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);
    std::cout << std::resetiosflags(std::ios::uppercase);

    std::cout << "--Back to defaults----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 1.23457e+08
    std::cout << num2 << std::endl; // 1234.57
    std::cout << num3 << std::endl; // 1234

    return 0;
}