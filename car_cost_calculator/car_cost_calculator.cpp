#include <iostream>
#include <clocale>
using namespace std;
int main()

{
    setlocale(LC_ALL, "Portuguese");

    // Variables //
    float final_consumer_price, factory_cost, tax_amount, distributor_markup;
    char answer;

    do
    {
        // Input //
        cout << "\033[0;33m" << "\n======> >> Welcome to the Car Cost Calculator <<  <=====\n" << "\033[0m";
        cout << "\033[0;33m" << "\nType in the factory cost: " << "\033[0m" << "U$ ";
        cin >> factory_cost;

        while (factory_cost < 0)
        {
            cout << "\033[31m" << "\nInvalid number! Please try again." << "\033[0m";
            cout << "\033[0;33m" << "\nType in a valid cost: " << "\033[0m";
            cin >> factory_cost;
        }

        // Processes //
        distributor_markup = factory_cost * 0.1;
        tax_amount = factory_cost * 0.45;
        final_consumer_price = factory_cost + distributor_markup + tax_amount;

        // Output //
        cout << "\033[0;33m" << "The consumer cost is: " << "\033[32m" << "U$ "  << final_consumer_price << "\033[0m";
        cout << "\033[0;33m" << "\n\nWould you like to calculate another car? (Y/N) " << "\033[0m";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');

    system("pause");

    return 0;
}