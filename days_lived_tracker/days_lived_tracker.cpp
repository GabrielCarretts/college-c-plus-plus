#include <iostream>
#include <clocale>
using namespace std;
int main()

{
    // Variables //
    int day_of_birth, month_of_birth, year_of_birth, birth_day_total, current_day, current_month, current_year, current_day_total, days_lived;
    char answer, slash_1, slash_2;

    // Colors //
    string const COLOR_GREEN = "\033[32m";
    string const COLOR_GREEN_BOLD = "\033[1;32m";
    string const COLOR_RED = "\033[1;31m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Input //
    do
    {
        cout << UNDERLINED_TEXT << COLOR_GREEN_BOLD << "\n\n====> Welcome to the Days Lived Tracker! <====\n" << COLOR_RESET;
        cout << COLOR_GREEN << "\nEnter your date of birth (DD/MM/YYYY): " << COLOR_RESET;
        cin >> day_of_birth >> slash_1 >> month_of_birth >> slash_2 >> year_of_birth;
        while (day_of_birth < 1 || day_of_birth > 30 || slash_1 != '/' || month_of_birth < 1 || month_of_birth > 12 || slash_2 != '/' || year_of_birth <= 0)
        {
            cout << COLOR_RED << "\nInvalid date! Please enter a valid date in the format DD/MM/YYYY (day: 1–30, month: 1–12, year must be greater than 0): " << COLOR_RESET;
            cin >> day_of_birth >> slash_1 >> month_of_birth >> slash_2 >> year_of_birth;
        }

        cout << COLOR_GREEN << "Enter the current date (DD/MM/YYYY): " << COLOR_RESET;
        cin >> current_day >> slash_1 >> current_month >> slash_2 >> current_year;
        while (current_day < 1 || current_day > 30 || slash_1 != '/' || current_month < 1 || current_month > 12 || slash_2 != '/' || current_year <= 0 || current_year < year_of_birth)
        {
            cout << COLOR_RED << "\nInvalid date! Please enter a valid date in the format DD/MM/YYYY (day: 1–30, month: 1–12, current year must be bigger than birth year): " << COLOR_RESET;
            cin >> current_day >> slash_1 >> current_month >> slash_2 >> current_year;
        }

        // Process //
        birth_day_total = (year_of_birth * 360) + (month_of_birth * 30) + day_of_birth;
        current_day_total = (current_year * 360) + (current_month * 30) + current_day;
        days_lived = current_day_total - birth_day_total;

        cout << COLOR_GREEN << "\nYou have lived approximately " << COLOR_RESET << COLOR_GREEN_BOLD << days_lived << COLOR_RESET << COLOR_GREEN << " days!" << COLOR_RESET;
        cout << COLOR_GREEN << "\n\nWould you like to calculate another person's days lived? (Y/N) " << COLOR_RESET;
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