#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_MAGENTA = "\033[1;35m";
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_WHITE = "\033[1;37m";
    string const COLOR_DIM = "\033[0;37m";
    string const COLOR_RESET = "\033[0m";
    string const UNDERLINED_TEXT = "\033[4m";

    // Variables //
    string names[5], youngest_name, oldest_name;
    int ages[5], total_age, youngest_age, oldest_age;
    int sex[5];
    double age_average;
    char answer;

    do
    {
        total_age = 0;
        youngest_age = 999;
        oldest_age = -1;
        cout << UNDERLINED_TEXT << COLOR_MAGENTA << "\n\n====> Welcome to the People Stats! <====" << COLOR_RESET;
        for (int i = 0; i < 5; i++)
        {
            cout << COLOR_WHITE << "\n\nType the name: " << COLOR_RESET;
            getline(cin, names[i]);

            cout << COLOR_WHITE << "Type the age: " << COLOR_RESET;
            cin >> ages[i];

            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << COLOR_MAGENTA << "Invalid character! Must be a number! Try again: " << COLOR_RESET;
                cin >> ages[i];
            }

            total_age = total_age + ages[i];

            cout << COLOR_WHITE << "Type the sex (1 - male, 2 - female): " << COLOR_RESET;
            cin >> sex[i];

            while (sex[i] != 1 && sex[i] != 2)
            {
                cout << COLOR_MAGENTA << "Invalid gender! Gender must be 1 or 2! Try again: " << COLOR_RESET;
                cin >> sex[i];
            }

            cin.ignore();

            if (ages[i] < youngest_age)
            {
                youngest_age = ages[i];
                youngest_name = names[i];
            }
            if (ages[i] > oldest_age && sex[i] == 1)
            {
                oldest_age = ages[i];
                oldest_name = names[i];
            }
        }

        age_average = total_age / 5.0;

        // Output //
        cout << fixed << setprecision(2);
        cout << COLOR_MAGENTA << UNDERLINED_TEXT << "\n====> Results <====\n" << COLOR_RESET;

        cout << COLOR_DIM << "\nAverage age is: " << COLOR_CYAN << age_average << COLOR_RESET << endl;
        cout << COLOR_DIM << "\nYoungest name: " << COLOR_CYAN << youngest_name << COLOR_RESET;
        cout << COLOR_DIM << "\nYoungest age: " << COLOR_CYAN << youngest_age << COLOR_RESET;

        if (oldest_age == -1)
        {
            cout << COLOR_MAGENTA << "\nThere are no men in this group!" << COLOR_RESET;
        }
        else
        {
            cout << COLOR_DIM << "\nOldest man name: " << COLOR_CYAN << oldest_name << COLOR_RESET;
            cout << COLOR_DIM << "\nOldest man age: " << COLOR_CYAN << oldest_age << COLOR_RESET;
        }

        cout << COLOR_WHITE << "\n\nWould you like to calculate another 5 people? (Y/N) " << COLOR_RESET;
        cin >> answer;

        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_MAGENTA << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }

        cin.ignore();
    } while (answer == 'y' || answer == 'Y');

    system("pause");
    return 0;
}