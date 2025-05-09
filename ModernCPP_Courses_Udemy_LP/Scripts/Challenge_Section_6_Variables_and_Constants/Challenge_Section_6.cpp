#include <iostream>
using namespace std;


int main(void)
{
    const float price_per_small_room {25.0};
    const float price_per_large_room {35.0};
    const float sales_tax_rate {0.06};
    const short int days_of_valid_price {30};

    short int number_of_small_rooms {0};
    short int number_of_large_rooms {0};

    cout << "Please enter the number of small and large rooms you'd like to get cleaned with a space between them: " << endl;
    cin >> number_of_small_rooms >> number_of_large_rooms;

    cout << "-------------------------------------" << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: " << price_per_small_room << "$" << endl;
    cout << "Price per large room: " << price_per_large_room << "$" << endl;

    float cost = ((number_of_small_rooms*price_per_small_room) + (number_of_large_rooms*price_per_large_room));
    float tax = cost * sales_tax_rate;
    float total_estimate = cost + tax; 

    cout << "-------------------------------------" << endl;

    cout << "Cost: " << cost << "$" << endl;
    cout << "Tax: " << tax << "$" << endl;
    cout << "Total Estimate: " << total_estimate << "$" << endl;
    cout << "This estimate is valid for " << days_of_valid_price << " days." << endl;

    return 0;
}