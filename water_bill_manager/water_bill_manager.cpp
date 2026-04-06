#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_BLUE_BOLD = "\033[1;34m";
    string const COLOR_CYAN = "\033[36m";
    string const COLOR_GREEN_BOLD = "\033[1;32m";
    string const COLOR_RED = "\033[1;31m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    int registration_number, class_type;
    double m3_consumed, sanitation_fee, water_charge, total_bill, subtotal, pis_amount, cofins_amount;
    string class_type_name, client_name;
    char answer;

    // Input //
    do
    {
        cout << COLOR_BLUE_BOLD << UNDERLINED_TEXT << "\n\n====> Welcome to CASAN Water Manager! <====\n" << COLOR_RESET;

        cout << COLOR_CYAN << "\nEnter the registration number: " << COLOR_RESET;
        cin >> registration_number;
        while (registration_number <= 0)
        {
            cout << COLOR_RED << "\nInvalid number! Registration number must be greater than 0: " << COLOR_RESET;
            cin >> registration_number;
        }

        cin.ignore();
        cout << COLOR_CYAN << "Enter the client name: " << COLOR_RESET;
        getline(cin, client_name);

        cout << COLOR_CYAN << "Enter the amount consumed in m³: " << COLOR_RESET;
        cin >> m3_consumed;
        while (m3_consumed < 0)
        {
            cout << COLOR_RED << "\nInvalid value! m³ consumed cannot be negative: " << COLOR_RESET;
            cin >> m3_consumed;
        }

        cout << COLOR_CYAN << "Enter the class type (1-Residential, 2-Commercial, 3-Industrial): " << COLOR_RESET;
        cin >> class_type;
        while (class_type < 1 || class_type > 3)
        {
            cout << COLOR_RED << "\nInvalid number! Class type must be 1, 2, or 3: " << COLOR_RESET;
            cin >> class_type;
        }

        if (class_type == 1)
        {
            sanitation_fee = 5.00;
            class_type_name = "Residential";
        }
        else if (class_type == 2)
        {
            sanitation_fee = 10.00;
            class_type_name = "Commercial";
        }
        else
        {
            sanitation_fee = 15.00;
            class_type_name = "Industrial";
        }

        // Process //
        if (m3_consumed <= 10)
        {
            water_charge = m3_consumed * 2.99;
        }
        else if (m3_consumed <= 25)
        {
            water_charge = (10 * 2.99) + ((m3_consumed - 10) * 5.48);
        }
        else if (m3_consumed <= 50)
        {
            water_charge = (10 * 2.99) + (15 * 5.48) + ((m3_consumed - 25) * 7.69);
        }
        else
        {
            water_charge = (10 * 2.99) + (15 * 5.48) + (25 * 7.69) + ((m3_consumed - 50) * 9.22);
        }

        subtotal = water_charge + sanitation_fee;
        pis_amount = subtotal * 0.0065;
        cofins_amount = subtotal * 0.03;
        total_bill = subtotal + pis_amount + cofins_amount;

        // Output //
        cout << fixed << setprecision(2);
        cout << UNDERLINED_TEXT << COLOR_BLUE_BOLD << "\n\n====> Water Bill Summary <====\n" << COLOR_RESET;
        cout << COLOR_CYAN << "\nClient name: " << client_name << COLOR_RESET;
        cout << COLOR_CYAN << "\nRegistration number: " << registration_number << COLOR_RESET;
        cout << COLOR_CYAN << "\nClass type: " << class_type_name << COLOR_RESET;
        cout << COLOR_CYAN << "\nWater charge: " << COLOR_GREEN_BOLD << "$ " << water_charge << COLOR_RESET;
        cout << COLOR_CYAN << "\nSanitation fee: " << COLOR_GREEN_BOLD << "$ " << sanitation_fee << COLOR_RESET;
        cout << COLOR_CYAN << "\nPIS: " << COLOR_GREEN_BOLD << "$ " << pis_amount << COLOR_RESET;
        cout << COLOR_CYAN << "\nCOFINS: " << COLOR_GREEN_BOLD << "$ " << cofins_amount << COLOR_RESET;
        cout << COLOR_GREEN_BOLD << "\n\nTotal bill: " <<  "$ " << total_bill << COLOR_RESET;

        // Loop //
        cout << COLOR_BLUE_BOLD << "\n\nWould you like to calculate another water bill? (Y/N) " << COLOR_RESET;
        cin >> answer;
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }

        cin.ignore();
    } while (answer == 'y' || answer == 'Y');

    system("pause");
    return 0;
}