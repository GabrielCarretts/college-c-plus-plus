#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    // Colors //
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    string name;
    float salary, total_salary_m, total_salary_f, avg_salary_m, avg_salary_f;
    int count_m, count_f;
    char answer, sex;

    // Process //
    do
    {
        total_salary_m = 0;
        total_salary_f = 0;
        count_m = 0;
        count_f = 0;
        do
        {
            cout << "\nEnter the name of the employee (type 'X' to stop): ";
            getline(cin, name);
            if (name != "X")
            {
                cout << "Enter the sex of the employee (M/F): ";
                cin >> sex;
                while (sex != 'M' && sex != 'F')
                {
                    cout << COLOR_RED << "Invalid sex! Please type M or F: " << COLOR_RESET;
                    cin >> sex;
                }
                cout << "Enter the salary of the employee: ";
                cin >> salary;
                while (cin.fail() || salary < 0)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                    cout << COLOR_RED << "Invalid salary! Must be a positive number! Try again: " << COLOR_RESET;
                    cin >> salary;
                }
                cin.ignore();
                if (sex == 'M')
                {
                    total_salary_m += salary;
                    count_m++;
                }
                else
                {
                    total_salary_f += salary;
                    count_f++;
                }
            }
        } while (name != "X");

        // Output //
        if (count_m == 0 && count_f == 0)
        {
            cout << COLOR_RED << "\nNo valid employees were entered!" << COLOR_RESET << endl;
        }
        else
        {
            if (count_m > 0)
            {
                avg_salary_m = total_salary_m / count_m;
            }
            else
            {
                avg_salary_m = 0;
            }
            if (count_f > 0)
            {
                avg_salary_f = total_salary_f / count_f;
            }
            else
            {
                avg_salary_f = 0;
            }

            cout << fixed << setprecision(2);
            cout << "\nAverage Salary for Males: $" << avg_salary_m << endl;
            cout << "Average Salary for Females: $" << avg_salary_f << endl;

            if (avg_salary_m > avg_salary_f)
            {
                cout << "\nThe male employees have a higher average salary." << endl;
            }
            else if (avg_salary_f > avg_salary_m)
            {
                cout << "\nThe female employees have a higher average salary." << endl;
            }
            else
            {
                cout << "\nThe average salaries for both sexes are equal." << endl;
            }
        }
        cout << "\n\nWould you like to calculate more employees? (Y/N) ";
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