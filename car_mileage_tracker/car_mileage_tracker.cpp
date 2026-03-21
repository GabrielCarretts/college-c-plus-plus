#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;
int main()

{

    // Variables //
    string car_brand;
    float initial_mileage, final_mileage, fuel_consumed, fuel_consumption, total_mileage;
    char answer;

    // Colors //
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_WHITE = "\033[1;37m";
    string const COLOR_BLUE = "\033[1;34m";
    string const COLOR_RESET = "\033[0m";
    string const UNDERLINED_TEXT = "\033[4m";

    setlocale(LC_ALL, "Portuguese");
    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_CYAN << "\n\n====> Welcome to the Mileage Tracker! <====\n" << COLOR_RESET;
        cout << COLOR_BLUE << "\nEnter the car brand: " << COLOR_RESET;
        getline(cin, car_brand);
        cout << COLOR_BLUE << "Enter the initial mileage (KM): " << COLOR_RESET;
        cin >> initial_mileage;
        while (initial_mileage < 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter 0 or a positive number: " << COLOR_RESET;
            cin >> initial_mileage;
        }
        cout << COLOR_BLUE << "Enter the final mileage (KM): " << COLOR_RESET;
        cin >> final_mileage;
        while (final_mileage <= initial_mileage)
        {
            cout << COLOR_RED << "\nInvalid value! Final mileage must be higher than initial mileage. Please enter a valid mileage: " << COLOR_RESET;
            cin >> final_mileage;
        }
        cout << COLOR_BLUE << "Enter the amount of fuel consumed: " << COLOR_RESET;
        cin >> fuel_consumed;
        while (fuel_consumed <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter a positive number: " << COLOR_RESET;
            cin >> fuel_consumed;
        }

        // Process //
        total_mileage = final_mileage - initial_mileage;
        fuel_consumption = total_mileage / fuel_consumed;

        // Output //
        cout << COLOR_CYAN << " \n\n====> RESULTS <====\n" << COLOR_RESET;
        cout << COLOR_CYAN << "\nCar brand: " << COLOR_WHITE << car_brand;
        cout << COLOR_CYAN << "\nInitial mileage: " << COLOR_WHITE << initial_mileage << " KM.";
        cout << COLOR_CYAN << "\nFinal mileage: " << COLOR_WHITE << final_mileage << " KM.";
        cout << COLOR_CYAN << "\nDistance traveled: " << COLOR_WHITE << total_mileage << " KM.";
        cout << fixed << setprecision (2);
        cout << COLOR_CYAN << "\nFuel consumed: " << COLOR_WHITE << fuel_consumed << " L.";
        cout << COLOR_CYAN << "\nFuel consumption: " << COLOR_WHITE << fuel_consumption << " KM/L.";
        cout << COLOR_CYAN << "\n\nWould you like to calculate another fuel consumption? (Y/N) " << COLOR_RESET;
        cin >> answer;
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }

        cin.ignore();
        cout.unsetf(ios::fixed);
        cout << setprecision(6);
    } while (answer == 'y' || answer == 'Y');

    system("pause");
    return 0;
}