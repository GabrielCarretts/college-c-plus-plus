#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;
int main()

{
    setlocale(LC_ALL, "Portuguese");

    // Variables //
    double const base_salary = 350.00;
    double const commission_per_sale = 50.00;
    double const commission_percentage = 0.05;
    double total_sold, vendor_final_salary, commission_per_car, total_sales_commission;
    int cars_sold;
    string vendor_name;
    char answer;

    // Colors //
    string const COLOR_GOLD = "\033[33m";
    string const COLOR_GOLD_BOLD = "\033[1;33m";
    string const COLOR_GREEN_BOLD = "\033[1;32m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";
    string const UNDERLINED_TEXT = "\033[4m";

    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_GOLD_BOLD << "\n=====> Welcome to Pica Pau Dealership Salary Calculator! <=====" << COLOR_RESET;
        cout << COLOR_GOLD << "\n\nEnter the salesperson name: " << COLOR_RESET;
        getline(cin, vendor_name);
        cout << COLOR_GOLD << "Enter the number of cars sold: " << COLOR_RESET;
        cin >> cars_sold;
        while (cars_sold < 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter 0 or a positive number: " << COLOR_RESET;
            cin >> cars_sold;
        }
        cout << COLOR_GOLD << "Enter the total R$ value of sales: R$ " << COLOR_RESET;
        cin >> total_sold;
        while (total_sold < 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter 0 or a positive number: " << COLOR_RESET;
            cin >> total_sold;
        }

        // Process //
        commission_per_car = cars_sold * commission_per_sale;
        total_sales_commission = total_sold * commission_percentage;
        vendor_final_salary = base_salary + commission_per_car + total_sales_commission;

        // Output //
        cout << fixed << setprecision(2);
        cout << COLOR_GOLD_BOLD << "\n====> " << COLOR_GREEN_BOLD << vendor_name << COLOR_GOLD_BOLD << " <====\n" << COLOR_RESET;
        cout << COLOR_GOLD << "\nCars sold: " << COLOR_GREEN_BOLD << cars_sold << COLOR_RESET;
        cout << COLOR_GOLD << "\nTotal sales value: " << COLOR_GREEN_BOLD << "R$ " << total_sold << COLOR_RESET;
        cout << COLOR_GOLD << "\nBase salary: " << COLOR_GREEN_BOLD << "R$ " << base_salary << COLOR_RESET;
        cout << COLOR_GOLD << "\nCar commission: " << COLOR_GREEN_BOLD << "R$ " << commission_per_car << COLOR_RESET;
        cout << COLOR_GOLD << "\nSales commission: " << COLOR_GREEN_BOLD << "R$ " << total_sales_commission << COLOR_RESET;
        cout << COLOR_GOLD << "\nFinal total salary: " << COLOR_GREEN_BOLD << "R$ " << vendor_final_salary << COLOR_RESET;
        cout << COLOR_GOLD << "\n\nWould you like to calculate another vendor's sales? (Y/N) " << COLOR_RESET;
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