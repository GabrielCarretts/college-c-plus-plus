#include <iostream>
using namespace std;
int main()

{
    // Colors //
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_BLUE_BOLD = "\033[1;34m";   // Corporate Blue (Headers)
    string const COLOR_YELLOW_BOLD = "\033[1;33m"; // Cardboard Yellow (Data & Prompts)

    // Variables //
    double package_width, package_height, package_length, string_amount, tie_1, tie_2, tie_3;
    char answer;

    // Input //
    do
    {
        cout << UNDERLINED_TEXT << COLOR_BLUE_BOLD << "\n\n====> Welcome to the Package String Estimator <====\n" << COLOR_RESET;
        cout << COLOR_YELLOW_BOLD << "\nEnter the width of the package (cm): " << COLOR_RESET;
        cin >> package_width;
        while (package_width <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Must be greater than 0: " << COLOR_RESET;
            cin >> package_width;
        }
        cout << COLOR_YELLOW_BOLD << "Enter the height of the package (cm): " << COLOR_RESET;
        cin >> package_height;
        while (package_height <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Must be greater than 0: " << COLOR_RESET;
            cin >> package_height;
        }
        cout << COLOR_YELLOW_BOLD << "Enter the length of the package (cm): " << COLOR_RESET;
        cin >> package_length;
        while (package_length <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Must be greater than 0: " << COLOR_RESET;
            cin >> package_length;
        }

        // Process //
        tie_1 = (package_width * 2) + (package_height * 2) + 10;
        tie_2 = (package_height * 2) + (package_length * 2) + 10;
        tie_3 = (package_width * 2) + (package_length * 2) + 10;
        string_amount = tie_1 + tie_2 + tie_3;

        // Output //
        cout << COLOR_BLUE_BOLD << "\nTie 1: " << COLOR_YELLOW_BOLD << tie_1 << " cm." << COLOR_RESET;
        cout << COLOR_BLUE_BOLD << "\nTie 2: " << COLOR_YELLOW_BOLD << tie_2 << " cm." << COLOR_RESET;
        cout << COLOR_BLUE_BOLD << "\nTie 3: " << COLOR_YELLOW_BOLD << tie_3 << " cm." << COLOR_RESET;
        cout << COLOR_BLUE_BOLD << "\nTotal string required: " << COLOR_YELLOW_BOLD << string_amount << " cm." << COLOR_RESET;
        cout << COLOR_BLUE_BOLD << "\n\nWould you like to calculate another package? (Y/N) " << COLOR_RESET;
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