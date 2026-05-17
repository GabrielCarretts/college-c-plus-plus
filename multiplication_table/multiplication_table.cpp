#include <iostream>
using namespace std;
int main()

{
    // Variables //
    char answer;

    // Colors //
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_GREEN = "\033[1;32m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";

    // Process //
    do
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << COLOR_CYAN << "\nMultiplication table of " << i << COLOR_RESET << endl;
            for (int j = 1; j <= 10; j++)
            {
                cout << COLOR_GREEN << i << " x " << j << " = " << i * j << COLOR_RESET << endl;
            }
        }
        cout << COLOR_CYAN << "\n\nWould you like to run again? (Y/N) " << COLOR_RESET;
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