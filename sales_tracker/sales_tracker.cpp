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
    string product_name, cheapest_product_name, most_sold_product_name;
    float product_price, cheapest_product_price, total_price;
    int product_quantity, most_sold_product_quantity, product_count;
    char answer;

    // Process //
    do
    {
        product_name = "";
        product_price = 0;
        product_quantity = 0;
        cheapest_product_price = 0;
        total_price = 0;
        most_sold_product_quantity = 0;
        product_count = 0;

        cout << UNDERLINED_TEXT << "\n\n====> Welcome to the Sales Tracker! <====" << COLOR_RESET << endl;
        do
        {
            cout << "\nEnter the name of the product (type 'end' to stop): ";
            getline(cin, product_name);
            if (product_name != "end")
            {
                cout << "Enter the unit price of the product: ";
                cin >> product_price;
                while (cin.fail() || product_price < 0)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                    cout << COLOR_RED << "Invalid price! Must be a positive number! Try again: " << COLOR_RESET;
                    cin >> product_price;
                }
                cout << "Enter the quantity sold of the product: ";
                cin >> product_quantity;
                while (cin.fail() || product_quantity < 0)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                    cout << COLOR_RED << "Invalid quantity! Must be a positive number! Try again: " << COLOR_RESET;
                    cin >> product_quantity;
                }
                cin.ignore();
                total_price += product_price;
                product_count++;
                if (cheapest_product_price == 0 || product_price < cheapest_product_price)
                {
                    cheapest_product_price = product_price;
                    cheapest_product_name = product_name;
                }
                if (product_quantity > most_sold_product_quantity)
                {
                    most_sold_product_quantity = product_quantity;
                    most_sold_product_name = product_name;
                }
            }
        } while (product_name != "end");

        if (product_count == 0)
        {
            cout << COLOR_RED << "\nNo valid products were entered!" << COLOR_RESET << endl;
        }
        else
        {
            cout << fixed << setprecision(2);
            cout << "\nCheapest Product: " << cheapest_product_name << " - $" << cheapest_product_price << endl;
            cout << "Most Sold Product: " << most_sold_product_name << " - Quantity: " << most_sold_product_quantity << endl;
            cout << "Average Price of Products: $" << total_price / product_count << endl;
        }
        cout << "\n\nWould you like to calculate more products? (Y/N) ";
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