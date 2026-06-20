#include <iostream>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_GREEN = "\033[1;32m";
    string const COLOR_YELLOW = "\033[1;33m";
    string const COLOR_CYAN = "\033[1;36m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    string month_array[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int user_input;
    char answer;

    do
    {
        // Input //
        cout << COLOR_CYAN << "\n\n====> Welcome to the Month Lookup <====" << COLOR_RESET;
        cout << COLOR_YELLOW << "\nEnter the month number (1-12): " << COLOR_RESET;
        cin >> user_input;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << COLOR_RED << "Invalid character! Must be a number (1-12)! Try again: " << COLOR_RESET;
            cin >> user_input;
        }
        while (user_input < 1 || user_input > 12)
        {
            cout << COLOR_RED << "Invalid character! Must be a number (1-12)! Try again: " << COLOR_RESET;
            cin >> user_input;
        }

        // Process & Output //
        cout << COLOR_GREEN << "\nThe month " << user_input << " is " << month_array[user_input - 1] << COLOR_RESET << endl;
        cout << COLOR_YELLOW << "\nWould you like to try again? (Y/N) " << COLOR_RESET;
        cin >> answer;
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }
        cin.ignore();
    } while (answer == 'y' || answer == 'Y');

    cout << "\n\n";
    system("pause");
    return 0;
}