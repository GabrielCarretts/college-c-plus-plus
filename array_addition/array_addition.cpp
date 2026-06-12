#include <iostream>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_GREEN = "\033[1;32m";
    string const COLOR_RESET = "\033[0m";

    int x[5], y[5], a[5];

    cout << COLOR_CYAN << "====> Array Addition <====" << COLOR_RESET << "\n\n";

    // Input //
    for (int i = 0; i < 5; i++)
    {
        cout << "Type the value of X (" << i << "): ";
        cin >> x[i];
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Type the value of Y (" << i << "): ";
        cin >> y[i];
    }

    // Process //
    for (int i = 0; i < 5; i++)
    {
        a[i] = x[i] + y[i];
    }

    // Output //
    cout << COLOR_GREEN << "\n====> Results <====" << COLOR_RESET << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of A in the position " << i << " is: " << a[i] << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}