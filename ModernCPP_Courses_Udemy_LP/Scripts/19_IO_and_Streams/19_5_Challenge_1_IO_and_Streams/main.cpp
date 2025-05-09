// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

struct City
{
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country
{
    std::string name;
    std::vector<City> cities;
};

struct Tours
{
    std::string title;
    std::vector<Country> countries;
};

void print_ruler(size_t width);

int main()
{
    Tours tours{"Tour Ticket Prices from Miami",
                {
                    {
                        "Colombia",
                        {{"Bogota", 8778000, 400.98},
                         {"Cali", 2401000, 424.12},
                         {"Medellin", 2464000, 350.98},
                         {"Cartagena", 972000, 345.34}},
                    },
                    {
                        "Brazil",
                        {{"Rio De Janiero", 13500000, 567.45},
                         {"Sao Paulo", 11310000, 975.45},
                         {"Salvador", 18234000, 855.99}},
                    },
                    {
                        "Chile",
                        {{"Valdivia", 260000, 569.12},
                         {"Santiago", 7040000, 520.00}},
                    },
                    {"Argentina",
                     {{"Buenos Aires", 3010000, 723.77}}},
                }};

    // Unformatted display so you can see how to access the vector elements

    const size_t main_width{100};
    const size_t w_col{static_cast<size_t>(std::floor(main_width / 4.0))};

    print_ruler(main_width);

    std::cout << std::setw((main_width / 2) - (tours.title.length() / 2)) << "" << (tours.title) << std::endl;

    // size_t total_len{};
    // for (auto country : tours.countries)
    // {
    //     for (auto city : country.cities)
    //     {
    //         total_len++;
    //     }
    // }

    std::cout << std::setw(w_col) << std::left << "Country"
              << std::setw(w_col) << std::left << "City"
              << std::setw(w_col) << std::right << "Population"
              << std::setw(w_col) << std::right << "Price" << std::endl;

    std::cout << std::setw(main_width) << std::setfill('-') << "" << std::endl;

    std::cout << std::setfill(' ');                  // permanent / reset refill to blank spaces
    std::cout << std::setprecision(2) << std::fixed; // permanent

    // for (size_t i{}; i < (total_len + 2); i++) // row iterator
    // {                                          // country name iterator
    //     std::cout << std::setw(w_col) << std::left << tours.countries[i].name
    //                  std::setw(w_col) << std::left << tours.countries[i].name;
    // }


    // Way 1 - Abstract
    // for (auto country : tours.countries) // loop through the countries
    // {
    //     std::cout << std::setw(w_col) << std::left << country.name;
    //     for (auto city : country.cities) // loop through the cities for each country
    //     {
    //         if (city.name != country.cities[0].name)
    //         {
    //             std::cout << std::setw(w_col) << "";
    //         }
    //         std::cout << std::setw(w_col) << std::left << city.name
    //                   << std::setw(w_col) << std::right << city.population
    //                   << std::setw(w_col) << std::right << city.cost
    //                   << std::endl;
    //     }
    // }

    // Way 2 - by using Structs

    for (Country country : tours.countries)
    {
        for (size_t i{}; i < country.cities.size(); i++)
        {
            std::cout << std::setw(w_col) << std::left << ((i==0) ? country.name : "") 
                      << std::setw(w_col) << std::left << country.cities.at(i).name
                      << std::setw(w_col) << std::right << country.cities.at(i).population
                      << std::setw(w_col) << std::right << country.cities.at(i).cost
                      << std::endl;
        }
    }

    std::cout << std::endl
              << std::endl;
    return 0;
}

void print_ruler(size_t width)
{
    for (size_t i{}; i < width; (i += 10))
    {
        std::cout << "1234567890";
    }

    std::cout << std::endl;
}