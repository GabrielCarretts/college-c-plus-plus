#include <iostream>
#include <iomanip>
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
    int total_grades = 0, student_grade[20];
    string student_names[20];
    double grade_average = 0;
    char answer;
    do
    {
        // Input //
        int total_grades = 0;
        double grade_average = 0;
        cout << COLOR_CYAN << "\n\n====> Welcome to the Grade Filter! <====" << COLOR_RESET;

        for (int i = 0; i < 20; i++)
        {
            cout << COLOR_YELLOW << "\nEnter the student name: " << COLOR_RESET;
            getline(cin, student_names[i]);
            cout << COLOR_YELLOW << "Type the student grade: " << COLOR_RESET;
            cin >> student_grade[i];
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << COLOR_RED << "Invalid character! Must be a number! Try again: " << COLOR_RESET;
                cin >> student_grade[i];
            }
            total_grades = total_grades + student_grade[i];
            cin.ignore();
        }

        // Process //
        grade_average = total_grades / 20.0;

        // Output //
        cout << COLOR_CYAN << "\n\n====> Results <====" << COLOR_RESET;
        cout << COLOR_YELLOW << "\nThe total is: " << COLOR_RESET << total_grades;
        cout << COLOR_YELLOW << "\nThe average is: " << COLOR_RESET << grade_average << endl;
        for (int i = 0; i < 20; i++)
        {
            if (student_grade[i] > grade_average)
            {
                cout << COLOR_GREEN << "\nName: " << COLOR_RESET << student_names[i];
                cout << COLOR_GREEN << " | Grade: " << COLOR_RESET << student_grade[i] << endl;
            }
        }
        cout << COLOR_YELLOW << "\n\nWould you like to calculate another class? (Y/N) " << COLOR_RESET;
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