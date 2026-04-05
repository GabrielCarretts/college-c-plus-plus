#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
    // Colors //
    string const COLOR_GREEN_BOLD = "\033[1;32m";
    string const COLOR_GOLD_BOLD = "\033[1;33m"; // Luxury Gold (For the Hotel Name and Final Bill)
    string const COLOR_CYAN = "\033[36m";        // Crisp Cyan (For the standard prompts)
    string const COLOR_MAGENTA = "\033[35m";     // Soft Magenta (For the individual totals in the receipt)
    string const COLOR_RED = "\033[1;31m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    char answer;
    string guest_name, room_type_name, guest_category, massage_rate_name;
    int reservation_number, guest_count, room_type, days, massage_count;
    double minibar_consumption, bar_consumption;
    double room_daily_rate, guest_extra_per_day, massage_price, iss_rate;
    double daily_total, massage_total, minibar_total, bar_total, subtotal, iss_amount, final_bill;
    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_GOLD_BOLD << "\n\n====> Welcome to Sono Bom Hotel! <====\n" << COLOR_RESET;
        cout << COLOR_CYAN << "\nEnter the reservation number: " << COLOR_RESET;
        cin >> reservation_number;
        while (reservation_number <= 0)
        {
            cout << COLOR_RED << "\nInvalid number! Reservation number must be greater than 0: " << COLOR_RESET;
            cin >> reservation_number;
        }

        cin.ignore();
        cout << COLOR_CYAN << "Enter the guest name: " << COLOR_RESET;
        getline(cin, guest_name);

        cout << COLOR_CYAN << "Enter the number of guests: " << COLOR_RESET;
        cin >> guest_count;
        while (guest_count <= 0)
        {
            cout << COLOR_RED << "\nInvalid number! Number of guests must be greater than 0: " << COLOR_RESET;
            cin >> guest_count;
        }
        if (guest_count <= 2)
        {
            guest_extra_per_day = 0;
            guest_category = "Couple";
        }
        else if (guest_count <= 4)
        {
            guest_extra_per_day = 20;
            guest_category = "Small Family";
        }
        else
        {
            guest_extra_per_day = 40;
            guest_category = "Big Family";
        }

        cout << COLOR_CYAN << "Enter the room type (1-Standard, 2-Luxury, 3-VIP): " << COLOR_RESET;
        cin >> room_type;
        while (room_type < 1 || room_type > 3)
        {
            cout << COLOR_RED << "\nInvalid number! Room type must be 1, 2 or 3: " << COLOR_RESET;
            cin >> room_type;
        }
        if (room_type == 1)
        {
            room_daily_rate = 50;
            room_type_name = "Standard";
        }
        else if (room_type == 2)
        {
            room_daily_rate = 80;
            room_type_name = "Luxury";
        }
        else
        {
            room_daily_rate = 150;
            room_type_name = "VIP";
        }
        cout << COLOR_CYAN << "Enter the number of days stayed: " << COLOR_RESET;
        cin >> days;
        while (days <= 0)
        {
            cout << COLOR_RED << "\nInvalid number! Number of days must be greater than 0: " << COLOR_RESET;
            cin >> days;
        }
        if (days > 10)
        {
            iss_rate = 0.01;
        }
        else if (days > 5)
        {
            iss_rate = 0.03;
        }
        else
        {
            iss_rate = 0.05;
        }

        cout << COLOR_CYAN << "Enter the in-room minibar consumption amount: $ " << COLOR_RESET;
        cin >> minibar_consumption;
        while (minibar_consumption < 0)
        {
            cout << COLOR_RED << "\nInvalid value! In-room minibar consumption cannot be negative: " << COLOR_RESET;
            cin >> minibar_consumption;
        }

        cout << COLOR_CYAN << "Enter the number of massages used: " << COLOR_RESET;
        cin >> massage_count;
        while (massage_count < 0)
        {
            cout << COLOR_RED << "\nInvalid value! Number of massages cannot be negative: " << COLOR_RESET;
            cin >> massage_count;
        }
        if (massage_count <= 3)
        {
            massage_price = 80;
            massage_rate_name = "Standard rate";
        }
        else
        {
            massage_price = 65;
            massage_rate_name = "Discounted rate";
        }

        cout << COLOR_CYAN << "Enter the bar consumption amount: $ " << COLOR_RESET;
        cin >> bar_consumption;
        while (bar_consumption < 0)
        {
            cout << COLOR_RED << "\nInvalid value! Bar consumption cannot be negative: " << COLOR_RESET;
            cin >> bar_consumption;
        }

        // Process //
        daily_total = (room_daily_rate + guest_extra_per_day) * days;
        massage_total = massage_price * massage_count;
        minibar_total = minibar_consumption + 12;
        bar_total = bar_consumption + (bar_consumption * 0.10);
        subtotal = daily_total + massage_total + minibar_total + bar_total;
        iss_amount = subtotal * iss_rate;
        final_bill = subtotal + iss_amount;

        // Output //
        cout << fixed << setprecision(2);
        cout << UNDERLINED_TEXT << COLOR_GOLD_BOLD << "\n\n====> Bill Summary <====\n" << COLOR_RESET;
        cout << COLOR_CYAN << "\nReservation number: " << COLOR_MAGENTA << reservation_number << COLOR_RESET;
        cout << COLOR_CYAN << "\nGuest name: " << COLOR_MAGENTA << guest_name << COLOR_RESET;
        cout << COLOR_CYAN << "\nRoom type: " << COLOR_MAGENTA << room_type_name << COLOR_RESET;
        cout << COLOR_CYAN << "\nNumber of days: " << COLOR_MAGENTA << days << COLOR_RESET;
        cout << COLOR_CYAN << "\nGuest category: " << COLOR_MAGENTA << guest_category << COLOR_RESET;
        cout << COLOR_CYAN << "\nRoom charges: " << COLOR_MAGENTA << "$ " << daily_total << COLOR_RESET;
        cout << COLOR_CYAN << "\nMassage pricing: " << COLOR_MAGENTA << massage_rate_name << COLOR_RESET;
        cout << COLOR_CYAN << "\nMassage total: " << COLOR_MAGENTA << "$ " << massage_total << COLOR_RESET;
        cout << COLOR_CYAN << "\nIn-room minibar total: " << COLOR_MAGENTA << "$ " << minibar_total << COLOR_RESET;
        cout << COLOR_CYAN << "\nBar total: " << COLOR_MAGENTA << "$ " << bar_total << COLOR_RESET;
        cout << COLOR_CYAN << "\nISS charge: " << COLOR_MAGENTA << "$ " << iss_amount << COLOR_RESET;
        cout << COLOR_GREEN_BOLD << "\n\nFinal bill: $ " << final_bill << COLOR_RESET;

        // Loop //
        cout << COLOR_GOLD_BOLD << "\n\nWould you like to calculate another stay? (Y/N) " << COLOR_RESET;
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