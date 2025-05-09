// Currency Converter


#include <iostream>
using namespace std;

int main (void)
{
    int amount_of_cents {};
    cout << "Enter amount of cents: ";
    cin >> amount_of_cents; 

    while (!(amount_of_cents > 0))
    {
        cout << "Invalid input, please enter number of cents (must be >= 0): ";
        cin >> amount_of_cents;
    }

    /*
    In US,
    1 dollar = 100 cents-
    1 quarter = 25 cents
    1 dime = 10 cents
    1 nickel = 5 cents
    1 penny = 1 cent
    */

    int n_dollars {}, n_quarters {}, n_dimes {}, n_nickels {}, n_pennies {};

    const int c_dollar {100};
    const int c_quarter {25};
    const int c_dime {10};
    const int c_nickel {5};
    const int c_penny {1};

    int remainder = amount_of_cents;

    if ((remainder > 0) && ((remainder/c_dollar) > 0))
    {
        n_dollars = remainder / c_dollar;
        // remainder = remainder - c_dollar*n_dollars;
        remainder = remainder % c_dollar;
    }

    if ((remainder > 0) && ((remainder/c_quarter) > 0))
    {
        n_quarters = remainder / c_quarter;
        //remainder = remainder - c_quarter*n_quarters;
        remainder = remainder % c_quarter;
    }

    if ((remainder > 0) && ((remainder/c_dime) > 0))
    {
        n_dimes = remainder / c_dime;
        // remainder = remainder - 10*n_dimes;
        remainder = remainder % c_dime;
    }

    if ((remainder > 0) && ((remainder/c_nickel) > 0))
    {
        n_nickels = remainder / c_nickel;
        // remainder = remainder - c_nickel*n_nickels;
        remainder = remainder % c_nickel;
    }

    if ((remainder > 0) && ((remainder/c_penny) > 0))
    {
        n_pennies = remainder / c_penny;
        // remainder = remainder - c_penny*n_pennies;
        remainder = remainder % c_penny;
    }       

    cout << "For " << amount_of_cents << " cents, I can give you:" << endl;
    cout << n_dollars << " dollars," << endl;
    cout << n_quarters << " quarters," << endl;
    cout << n_dimes << " dimes," << endl;
    cout << n_nickels << " nickels," << endl;
    cout << n_pennies << " pennies." << endl;

    return 0;
}