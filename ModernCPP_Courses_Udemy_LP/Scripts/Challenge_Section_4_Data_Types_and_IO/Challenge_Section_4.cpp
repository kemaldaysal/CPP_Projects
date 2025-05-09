#include <iostream>
using namespace std;

int main(void)
{
    int num = 0;

    cout << "Enter your favorite number between 1 and 100: " << endl;
    cin >> num;

    while (!((num >= 1) && (num <= 100)))
    {
        cout << "Wrong input, please re-enter again between 0-100: " << endl;
        cin >> num;
    }

    cout << "Amazing, that's my favorite number, too !!" << endl;
    cout << "No really, " << num << " is my favorite number!\n" << endl;

    return 0;
}