#include <iostream>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_GREEN_BOLD = "\033[1;32m";
    string const COLOR_PURPLE = "\033[35m";
    string const COLOR_RED = "\033[1;31m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    int temp = 0, X[20];
    char answer;

    do
    {
        // Input //
        cout << COLOR_PURPLE << "\n\n====> Welcome to the Array Flipper! <====" << COLOR_RESET;
        for (int i = 0; i < 20; i++)
        {
            cout << COLOR_PURPLE << "\nEnter the value: " << COLOR_RESET;
            cin >> X[i];
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << COLOR_RED << "Invalid character! Must be a number! Try again: " << COLOR_RESET;
                cin >> X[i];
            }
        }

        // Process //
        for (int i = 0; i < 10; i++)
        {
            temp = X[i];
            X[i] = X[19 - i];
            X[19 - i] = temp;
        }

        // Output //
        cout << COLOR_GREEN_BOLD << "===> Results <====" << COLOR_RESET << endl;
        for (int i = 0; i < 20; i++)
        {
            cout << COLOR_GREEN_BOLD << X[i] << " " << COLOR_RESET;
        }

        cout << COLOR_GREEN_BOLD << "\n\nWould you like to repeat the program? (Y/N) " << COLOR_RESET;
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