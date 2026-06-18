#include <iostream>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_GREEN = "\033[1;32m";
    string const COLOR_BLUE = "\033[1;34m";
    string const COLOR_YELLOW = "\033[1;33m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";
    string const UNDERLINED_TEXT = "\033[4m";

    // Variables //
    int n, j;

    cout << COLOR_BLUE << UNDERLINED_TEXT << "\n\n====> Welcome to the Negative Number Filter! <====" << COLOR_RESET;
    cout << COLOR_CYAN << "\n\nEnter the number of elements: " << COLOR_RESET;
    cin >> n;
    while (n <= 0)
    {
        cout << COLOR_RED << "\nInvalid Number! Must be higher than 0!" << COLOR_RESET;
        cout << COLOR_CYAN << "\nEnter the number of elements: " << COLOR_RESET;
        cin >> n;
    }

    int x[n];
    for (int i = 0; i < n; i++)
    {
        cout << COLOR_CYAN << "\nType the value: " << COLOR_RESET;
        cin >> x[i];
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << COLOR_RED << "Invalid character! Must be a number! Try again: " << COLOR_RESET;
            cin >> x[i];
        }

        if (x[i] < 0)
        {
            x[i] = 0;
        }
    }

    cout << COLOR_YELLOW << UNDERLINED_TEXT << "====> Results <====" << COLOR_RESET << endl;
    for (int i = 0; i < n; i++)
    {
        cout << COLOR_GREEN << "Box " << i << " contains: " << x[i] << COLOR_RESET << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}