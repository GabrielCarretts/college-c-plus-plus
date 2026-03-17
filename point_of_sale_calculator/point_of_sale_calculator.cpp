#include <iostream>
#include <clocale>
#include <string>
using namespace std;
int main()

{
    setlocale(LC_ALL, "Portuguese");

    // Variables //
    float current_item_price, discounted_price, discount_percentage, grand_total;
    string current_item_name;
    char answer;

    // Input //

    do
    {
        grand_total = 0;
        cout << "\033[0;33m" << "\n=====> Welcome to the store! <=====" << "\033[0m";

        for (int i = 1; i <= 3; i++)
        {
            cout << "\033[34m" << "\n\nType the name for product " << i << ": " << "\033[0m";
            getline(cin, current_item_name);
            cout << "\033[34m" << "Type the item price: " << "\033[0m" << " U$ ";
            cin >> current_item_price;
            cout << "\033[34m" << "Type the discount percentage: " << "\033[0m";
            cin >> discount_percentage;
            cin.ignore();

            // Process //
            discounted_price = current_item_price - (current_item_price * (discount_percentage / 100));
            grand_total = grand_total + discounted_price;

            cout << "\033[34m" << "\nProduct " << i << ": " << "\033[0m" << current_item_name;
            cout << "\033[34m" << "\nCurrent price: " << "\033[0m" << " U$ " << current_item_price;
            cout << "\033[34m" << "\nDiscounted price: " << "\033[0m" << " U$ " << discounted_price;
        }

        cout << "\033[32m" << "\n\nYour grand total is: U$ " << grand_total << "\033[0m\n";
        cout << "\033[34m" << "\n\nWould you like to calculate more products? (Y/N) " << "\033[0m";
        cin >> answer;
        cin.ignore();
    } while (answer == 'Y' || answer == 'y');

    system("pause");

    return 0;
}