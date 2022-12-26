// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{


    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };
    

    const int width1 = 24;
    const int width2 = 18;

    std::cout << "\t\t\t" << tours.title << std::endl << std::endl;

    std::cout << std::left << std::setw(width1) << "Country" << std::setw(width2) << "City" << std::setw(width2) << "Population" << std::setw(width2) << "Price"
        << std::endl << "-------------------------------------------------------------------" << std::endl;

        for(Country country : tours.countries) { 
            std::cout << std::left << std::setw(width1) << country.name;
            for(int i = 0; i < country.cities.size(); ++i){
                if (i != 0)
                {
                    std::cout << "\t\t\t";
                }
                std::cout << std::left << std::setw(width2) << country.cities.at(i).name << std::left << std::setw(width2) << country.cities.at(i).population << std::left << std::setw(width2) << country.cities.at(i).cost << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}