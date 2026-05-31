#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Colors //
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_GREEN = "\033[1;32m";
    string const COLOR_YELLOW = "\033[1;33m";

    // Variables //
    string student_name, highest_name, lowest_name;
    float student_grade, highest_grade, lowest_grade, grade_average, grade_total;
    int i;
    char answer;

    do
    {
        i = 0;
        grade_total = 0;
        student_name = "";
        highest_grade = 0;
        lowest_grade = 0;

        cout << COLOR_CYAN << UNDERLINED_TEXT << "\n\n====> Welcome to the Class Average Calculator! <====" << COLOR_RESET << endl;
        while (i <= 14 && student_name != "end")
        {
            cout << COLOR_CYAN << "\nEnter the name of the student: " << COLOR_RESET;
            getline(cin, student_name);
            if (student_name != "end")
            {
                cout << COLOR_CYAN << "\nEnter the grade of the student (0-10): " << COLOR_RESET;
                cin >> student_grade;
                while (cin.fail() || student_grade < 0 || student_grade > 10)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                    cout << COLOR_RED << "Invalid grade! Must be a number from 0-10! Try again: " << COLOR_RESET;
                    cin >> student_grade;
                }
                cin.ignore();
                grade_total += student_grade;

                if (i == 0)
                {
                    highest_grade = student_grade;
                    highest_name = student_name;
                    lowest_grade = student_grade;
                    lowest_name = student_name;
                }
                else if (student_grade > highest_grade)
                {
                    highest_grade = student_grade;
                    highest_name = student_name;
                }
                else if (student_grade < lowest_grade)
                {
                    lowest_grade = student_grade;
                    lowest_name = student_name;
                }
                i++;
            }
        }

        if (i == 0)
        {
            grade_average = grade_total / 1;
        }
        else
        {
            grade_average = grade_total / i;
        }

        cout << fixed << setprecision(2);
        cout << COLOR_CYAN << UNDERLINED_TEXT << "\n\n====> Final Result <====" << COLOR_RESET;
        cout << COLOR_CYAN << "\nAverage grade of class: " << grade_average << COLOR_RESET;
        cout << COLOR_GREEN << "\nHighest Grade: " << highest_grade << " achieved by " << highest_name << COLOR_RESET;
        cout << COLOR_YELLOW << "\nLowest Grade: " << lowest_grade << " scored by " << lowest_name << COLOR_RESET;
        cout << COLOR_CYAN << "\n\nWould you like to calculate another class? (Y/N) " << COLOR_RESET;
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