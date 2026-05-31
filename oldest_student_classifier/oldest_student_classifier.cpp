#include <iostream>
using namespace std;
int main()
{
    // Colors //
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_GREEN = "\033[1;32m";

    // Variables //
    string student_name, oldest_name;
    int student_age, oldest_age;
    char answer;

    // Process //
    do
    {
        student_name = "";
        student_age = 0;
        oldest_age = 0;
        oldest_name = "";

        cout << COLOR_CYAN << UNDERLINED_TEXT << "\n\n====> Welcome to the Oldest Student Classifier! <====" << COLOR_RESET << endl;

        do
        {
            cout << COLOR_CYAN << "\nEnter the name of the student: " << COLOR_RESET;
            getline(cin, student_name);

            cout << COLOR_CYAN << "Enter the age of the student (0 to stop): " << COLOR_RESET;
            cin >> student_age;

            while (cin.fail() || student_age < 0)
            {
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
                cout << COLOR_RED << "Invalid age! Must be a positive number! Try again: " << COLOR_RESET;
                cin >> student_age;
            }
            cin.ignore();
            if (student_age != 0 && student_age > oldest_age)
            {
                oldest_age = student_age;
                oldest_name = student_name;
            }

        } while (student_age != 0);

        // Output //
        if (oldest_age == 0)
        {
            cout << COLOR_RED << "\nNo valid students were entered!" << COLOR_RESET << endl;
        }
        else
        {
            cout << COLOR_GREEN << "\nThe oldest student is " << oldest_name << " with " << oldest_age << " years old!" << COLOR_RESET << endl;
        }

        cout << COLOR_CYAN << "\nWould you like to calculate another class? (Y/N) " << COLOR_RESET;
        cin >> answer;

        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }
        cin.ignore();

    } while (answer == 'y' || answer == 'Y');

    cout << endl;
    system("pause");
    return 0;
}