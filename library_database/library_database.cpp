#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_YELLOW = "\033[1;33m";
    string const COLOR_GREEN = "\033[1;32m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    vector<string> item_name, item_type;
    vector<int> item_year;
    vector<double> item_value;
    char answer;
    string temp_name, temp_type;
    int temp_year;
    double temp_value;

    // Input //
    do
    {
        cout << COLOR_CYAN << "\n\n====> UNIPLAC'S Library Database <====" << COLOR_RESET;
        while (true)
        {
            cout << COLOR_YELLOW << "\nEnter the book title (or 'end' to stop): " << COLOR_RESET;
            getline(cin, temp_name);
            if (temp_name == "end" || temp_name == "End" || temp_name == "END")
            {
                break;
            }
            item_name.push_back(temp_name);

            cout << COLOR_YELLOW << "Enter the publishing year: " << COLOR_RESET;
            cin >> temp_year;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << COLOR_RED << "Invalid character! Must be a number! Try again: " << COLOR_RESET;
                cin >> temp_year;
            }
            item_year.push_back(temp_year);

            cout << COLOR_YELLOW << "Enter the book price: " << COLOR_RESET;
            cin >> temp_value;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << COLOR_RED << "Invalid character! Must be a number! Try again: " << COLOR_RESET;
                cin >> temp_value;
            }
            item_value.push_back(temp_value);

            cout << COLOR_YELLOW << "Enter the book type (1-book 2-magazine): " << COLOR_RESET;
            cin >> temp_type;
            while (temp_type != "1" && temp_type != "2")
            {
                cout << COLOR_RED << "Invalid character! Must be a number (1-2)! Try again: " << COLOR_RESET;
                cin >> temp_type;
            }
            item_type.push_back(temp_type);
            cin.ignore();
        }

        // Process & Output //

        // Safety check: Only process if at least one book was entered
        if (item_name.empty())
        {
            cout << COLOR_RED << "\nNo books were entered on this run." << COLOR_RESET;
        }
        else
        {

            // Book and magazine price averages //
            double book_total_price = 0;
            double magazine_total_price = 0;
            double book_price_average = 0;
            double magazine_price_average = 0;
            int book_price_count = 0;
            int magazine_price_count = 0;
            for (int i = 0; i < item_value.size(); i++)
            {
                if (item_type[i] == "1")
                {
                    book_total_price = book_total_price + item_value[i];
                    book_price_count++;
                }
                else if (item_type[i] == "2")
                {
                    magazine_total_price = magazine_total_price + item_value[i];
                    magazine_price_count++;
                }
            }
            if (book_price_count > 0)
            {
                book_price_average = book_total_price / book_price_count;
            }
            if (magazine_price_count > 0)
            {
                magazine_price_average = magazine_total_price / magazine_price_count;
            }

            // Looking for "Algorithms for Experts" //
            for (int i = 0; i < item_name.size(); i++)
            {
                if (item_name[i] == "Algorithms for Experts")
                {
                    cout << COLOR_GREEN << "\nThe book Algorithms for Experts is in the library." << COLOR_RESET;
                }
            }

            // Books and magazines average age and comparsion //
            int book_count = 0;
            int magazine_count = 0;
            double book_age = 0;
            double magazine_age = 0;
            double book_age_average = 0;
            double magazine_age_average = 0;

            for (int i = 0; i < item_type.size(); i++)
            {
                if (item_type[i] == "1")
                {
                    book_age = book_age + (2026 - item_year[i]);
                    book_count++;
                }
                else if (item_type[i] == "2")
                {
                    magazine_age = magazine_age + (2026 - item_year[i]);
                    magazine_count++;
                }
            }
            if (book_count > 0)
            {
                book_age_average = book_age / book_count;
            }
            if (magazine_count > 0)
            {
                magazine_age_average = magazine_age / magazine_count;
            }

            cout << COLOR_CYAN << "\n\n====> RESULTS <====" << COLOR_RESET;
            cout << fixed << setprecision(2);
            cout << COLOR_CYAN << "\n\n====> Book Price Average <====" << COLOR_RESET;
            cout << COLOR_GREEN << "\nThe average book price is " << "$ " << book_price_average;
            cout << "\nThe average magazine price is " << "$ " << magazine_price_average << COLOR_RESET;
            cout << COLOR_CYAN << "\n\n====> Age Average <====" << COLOR_RESET;
            if (book_age_average > magazine_age_average)
            {
                cout << COLOR_GREEN << "\nBooks have the higher average age with " << book_age_average << " years" << COLOR_RESET;
            }
            else if (magazine_age_average > book_age_average)
            {
                cout << COLOR_GREEN << "\nMagazines have the higher average age with " << magazine_age_average << " years" << COLOR_RESET;
            }
            else
            {
                cout << COLOR_GREEN << "\nThe average ages are the same!" << COLOR_RESET;
            }

            // Most exepensive and cheaper items //
            int cheapest_index = 0;
            int expensive_index = 0;
            for (int i = 0; i < item_value.size(); i++)
            {
                if (item_value[i] > item_value[expensive_index])
                {
                    expensive_index = i;
                }
                else if (item_value[i] < item_value[cheapest_index])
                {
                    cheapest_index = i;
                }
            }

            cout << COLOR_CYAN << "\n\n====> Most Expensive Item <====" << COLOR_RESET;
            cout << COLOR_GREEN << "\nItem name: " << item_name[expensive_index];
            cout << "\nPublishing year: " << item_year[expensive_index];
            cout << "\nPrice: $ " << item_value[expensive_index];
            cout << "\nType: ";
            if (item_type[expensive_index] == "1")
            {
                cout << "Book";
            }
            else
            {
                cout << "Magazine";
            }
            cout << COLOR_RESET;

            cout << COLOR_CYAN << "\n\n====> Cheapest Item <====" << COLOR_RESET;
            cout << COLOR_GREEN << "\nItem name: " << item_name[cheapest_index];
            cout << "\nPublishing year: " << item_year[cheapest_index];
            cout << "\nPrice: $ " << item_value[cheapest_index];
            cout << "\nType: ";
            if (item_type[cheapest_index] == "1")
            {
                cout << "Book";
            }
            else
            {
                cout << "Magazine";
            }
            cout << COLOR_RESET;

            // Newest item //
            int newest_index = 0;
            for (int i = 0; i < item_year.size(); i++)
            {
                if (item_year[i] > item_year[newest_index])
                {
                    newest_index = i;
                }
            }
            cout << COLOR_CYAN << "\n\n====> Newest Item <====" << COLOR_RESET;
            cout << COLOR_GREEN << "\nItem name: " << item_name[newest_index];
            cout << "\nPublishing year: " << item_year[newest_index];
            cout << "\nPrice: $ " << item_value[newest_index];
            cout << "\nType: ";
            if (item_type[newest_index] == "1")
            {
                cout << "Book";
            }
            else
            {
                cout << "Magazine";
            }
            cout << COLOR_RESET;
        }

        // Loop //
        cout << COLOR_YELLOW << "\n\nWould you like to input more items? (Y/N) " << COLOR_RESET;
        cin >> answer;

        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }

        item_name.clear();
        item_year.clear();
        item_value.clear();
        item_type.clear();
        cin.ignore();
    } while (answer == 'y' || answer == 'Y');
    cout << "\n\n";
    system("pause");
    return 0;
}