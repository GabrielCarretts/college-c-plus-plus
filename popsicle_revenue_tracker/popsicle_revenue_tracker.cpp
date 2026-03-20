#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;
int main()

{
    setlocale(LC_ALL, "Portuguese");

    // Variables //
    double const popsicle_1_price = 0.50, popsicle_2_price = 0.60, popsicle_3_price = 0.75;
    double total_sold_1, total_sold_2, total_sold_3, grand_total;
    int amount_sold_1, amount_sold_2, amount_sold_3;
    char answer;
    string const COLOR_BLUE = "\033[34m", COLOR_GREEN = "\033[32m", COLOR_RESET = "\033[0m", COLOR_RED = "\033[1;31m", COLOR_CYAN = "\033[1;36m", COLOR_GREEN_BOLD = "\033[1;32m";
    do
    {
        // Input //
        cout << COLOR_CYAN << "\n=====> Welcome to the POP Tracker <=====" << COLOR_RESET;
        cout << COLOR_BLUE << "\n\nEnter the amount sold for the first popsicle type: " << COLOR_RESET;
        cin >> amount_sold_1;
        while (amount_sold_1 < 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter 0 or a positive number: " << COLOR_RESET;
            cin >> amount_sold_1;
        }
        cout << COLOR_BLUE << "Enter the amount sold for the second popsicle type: " << COLOR_RESET;
        cin >> amount_sold_2;
        while (amount_sold_2 < 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter 0 or a positive number: " << COLOR_RESET;
            cin >> amount_sold_2;
        }
        cout << COLOR_BLUE << "Enter the amount sold for the third popsicle type: " << COLOR_RESET;
        cin >> amount_sold_3;
        while (amount_sold_3 < 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter 0 or a positive number: " << COLOR_RESET;
            cin >> amount_sold_3;
        }
        // Process //
        total_sold_1 = amount_sold_1 * popsicle_1_price;
        total_sold_2 = amount_sold_2 * popsicle_2_price;
        total_sold_3 = amount_sold_3 * popsicle_3_price;
        grand_total = total_sold_1 + total_sold_2 + total_sold_3;

        // Output //
        cout << fixed << setprecision(2);
        cout << COLOR_CYAN << "\n\n==== Popsicle 1 ====" << COLOR_RESET << COLOR_BLUE << "\nQuantity sold: " << COLOR_GREEN << amount_sold_1 << COLOR_BLUE << "\nTotal: " << COLOR_GREEN << "R$ " << total_sold_1 << COLOR_RESET << endl;
        cout << COLOR_CYAN << "\n==== Popsicle 2 ====" << COLOR_RESET << COLOR_BLUE << "\nQuantity sold: " << COLOR_GREEN << amount_sold_2 << COLOR_BLUE << "\nTotal: " << COLOR_GREEN << "R$ " << total_sold_2 << COLOR_RESET << endl;
        cout << COLOR_CYAN << "\n==== Popsicle 3 ====" << COLOR_RESET << COLOR_BLUE << "\nQuantity sold: " << COLOR_GREEN << amount_sold_3 << COLOR_BLUE << "\nTotal: " << COLOR_GREEN << "R$ " << total_sold_3 << COLOR_RESET << endl;
        cout << COLOR_GREEN_BOLD << "\nAnd the grand total was: R$" << grand_total << endl
             << COLOR_RESET;
        cout << COLOR_CYAN << "\n\nWould you like to calculate more popsicles? (Y/N) " << COLOR_RESET;
        cin >> answer;
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }
    } while (answer == 'y' || answer == 'Y');

    system("pause");

    return 0;
}