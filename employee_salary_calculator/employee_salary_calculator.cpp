#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;
int main()

{

    // Variables //
    string employee_name;
    double gross_salary, pension_deduction, income_tax_deduction, salary_after_pension, total_deduction, net_salary;
    double const pension_discount = 0.10;
    double const irs_discount = 0.25;
    char answer;

    // Colors //
    string const COLOR_GREEN = "\033[1;32m";
    string const COLOR_YELLOW = "\033[1;33m";
    string const COLOR_MAGENTA = "\033[1;35m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";
    string const UNDERLINED_TEXT = "\033[4m";
    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_MAGENTA << "\n\n====> Welcome to the Employee Salary Calculator! <====\n" << COLOR_RESET;
        cout << COLOR_YELLOW << "\nEnter the employee name: " << COLOR_RESET;
        getline(cin, employee_name);
        cout << COLOR_YELLOW << "Enter the gross salary: " << COLOR_RESET << "$ ";
        cin >> gross_salary;
        while (gross_salary <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter a positive number: " << COLOR_RESET;
            cin >> gross_salary;
        }

        // Process //
        pension_deduction = gross_salary * pension_discount;
        salary_after_pension = gross_salary - pension_deduction;
        income_tax_deduction = salary_after_pension * irs_discount;
        net_salary = salary_after_pension - income_tax_deduction;
        total_deduction = pension_deduction + income_tax_deduction;

        // Output //
        cout << fixed << setprecision(2);
        cout << UNDERLINED_TEXT << COLOR_MAGENTA << "\n====> " << employee_name << " <====\n" << COLOR_RESET;
        cout << COLOR_MAGENTA << "\nGross salary: " << COLOR_YELLOW << "$ " << gross_salary << COLOR_RESET;
        cout << COLOR_MAGENTA << "\nPension deduction: " << COLOR_YELLOW << "$ " << pension_deduction << COLOR_RESET;
        cout << COLOR_MAGENTA << "\nIncome tax deduction: " << COLOR_YELLOW << "$ " << income_tax_deduction << COLOR_RESET;
        cout << COLOR_MAGENTA << "\nTotal deduction: " << COLOR_RED << "$ " << total_deduction << COLOR_RESET;
        cout << COLOR_MAGENTA << "\nNet salary: " << COLOR_GREEN << "$ " << net_salary << COLOR_RESET;
        cout << COLOR_MAGENTA << "\n\nWould you like to calculate another employee's salary? (Y/N) " << COLOR_RESET;
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
