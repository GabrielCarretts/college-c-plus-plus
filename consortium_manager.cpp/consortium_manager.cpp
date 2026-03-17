#include <iostream>
using namespace std;
int main()

{
    // Variables //
    int total_installment_number, paid_installments;
    double current_installment_value, remaining_debt, amount_paid, total_plan_value;
    char answer;
    const string COLOR_BLUE = "\033[34m", COLOR_YELLOW = "\033[1;33m", COLOR_GREEN = "\033[1;32m", COLOR_CYAN = "\033[1;36m", COLOR_RESET = "\033[0m";

    do
    {
        // Input //
        cout << COLOR_CYAN << "\n\n=====> Welcome to the Consortium Manager! <=====\n" << COLOR_RESET;
        cout << COLOR_BLUE << "\nEnter the total number of installments: " << COLOR_RESET;
        cin >> total_installment_number;
        while (total_installment_number <= 0)
        {
            cout << COLOR_YELLOW << "\nInvalid number! \nThe number must be greater than 0. \nPlease try again." << COLOR_RESET;
            cout << COLOR_BLUE << "\n\nEnter the total number of installments: " << COLOR_RESET;
            cin >> total_installment_number;
        }

        cout << COLOR_BLUE << "Enter the number of installments paid: " << COLOR_RESET;
        cin >> paid_installments;
        while (paid_installments < 0 || paid_installments > total_installment_number)
        {
            cout << COLOR_YELLOW << "\nInvalid number! \nThe number must be greater than or equal to 0 and less than or equal to the total number of installments. \nPlease try again." << COLOR_RESET;
            cout << COLOR_BLUE << "\n\nEnter the number of installments paid: " << COLOR_RESET;
            cin >> paid_installments;
        }

        cout << COLOR_BLUE << "Enter the value of an installment: U$ " << COLOR_RESET;
        cin >> current_installment_value;
        while (current_installment_value <= 0)
        {
            cout << COLOR_YELLOW << "\nInvalid number! \nThe number must be greater than 0. \nPlease try again." << COLOR_RESET;
            cout << COLOR_BLUE << "\n\nEnter the value of an installment: U$ " << COLOR_RESET;
            cin >> current_installment_value;
        }

        // Process //
        amount_paid = paid_installments * current_installment_value;
        total_plan_value = total_installment_number * current_installment_value;
        remaining_debt = total_plan_value - amount_paid;

        // Output //
        cout << COLOR_GREEN << "\nThe total amount paid is: U$ " << amount_paid << COLOR_RESET;
        cout << COLOR_GREEN << "\nThe remaining debt is: U$ " << remaining_debt << COLOR_RESET << endl;

        cout << COLOR_CYAN << "\n\nWould you like to calculate another consortium? (Y/N) " << COLOR_RESET;
        cin >> answer;
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_YELLOW << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }
    } while (answer == 'y' || answer == 'Y');

    system("pause");
    return 0;
}