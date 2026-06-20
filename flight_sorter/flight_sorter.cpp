#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_GREEN = "\033[1;32m";
    string const COLOR_YELLOW = "\033[1;33m";
    string const COLOR_CYAN = "\033[1;36m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    vector<string> passenger_name, origin_city, destination_city;
    string temp_name, temp_origin, temp_destination;
    char answer;

    do
    {
        // Input //
        cout << COLOR_CYAN << "\n\n====> Welcome to the Flight Sorter! <====" << COLOR_RESET;

        while (true)
        {
            cout << COLOR_YELLOW << "\nEnter the passenger name (or 'end' to stop): " << COLOR_RESET;
            getline(cin, temp_name);
            if (temp_name == "end" || temp_name == "End" || temp_name == "END")
            {
                break;
            }
            passenger_name.push_back(temp_name);

            cout << COLOR_YELLOW << "Enter the origin city (A, B, or C): " << COLOR_RESET;
            getline(cin, temp_origin);
            while (temp_origin != "a" && temp_origin != "A" && temp_origin != "b" && temp_origin != "B" && temp_origin != "c" && temp_origin != "C")
            {
                cout << COLOR_RED << "Invalid option! Please type A, B or C: " << COLOR_RESET;
                getline(cin, temp_origin);
            }
            origin_city.push_back(temp_origin);

            cout << COLOR_YELLOW << "Enter the destination city (A, B, or C): " << COLOR_RESET;
            getline(cin, temp_destination);
            while (temp_destination != "a" && temp_destination != "A" && temp_destination != "b" && temp_destination != "B" && temp_destination != "c" && temp_destination != "C")
            {
                cout << COLOR_RED << "Invalid option! Please type A, B or C: " << COLOR_RESET;
                getline(cin, temp_destination);
            }
            destination_city.push_back(temp_destination);
        }

        // Process & Output //
        cout << COLOR_CYAN << "\n\n====> Passengers going to City A <====" << COLOR_RESET;
        for (int i = 0; i < passenger_name.size(); i++)
        {
            if (destination_city[i] == "a" || destination_city[i] == "A")
            {
                cout << COLOR_GREEN << "\n- " << passenger_name[i] << " (From: " << origin_city[i] << ")" << COLOR_RESET;
            }
        }
        cout << COLOR_CYAN << "\n\n====> Passengers going to City B <====" << COLOR_RESET;
        for (int i = 0; i < passenger_name.size(); i++)
        {
            if (destination_city[i] == "b" || destination_city[i] == "B")
            {
                cout << COLOR_GREEN << "\n- " << passenger_name[i] << " (From: " << origin_city[i] << ")" << COLOR_RESET;
            }
        }
        cout << COLOR_CYAN << "\n\n====> Passengers going to City C <====" << COLOR_RESET;
        for (int i = 0; i < passenger_name.size(); i++)
        {
            if (destination_city[i] == "c" || destination_city[i] == "C")
            {
                cout << COLOR_GREEN << "\n- " << passenger_name[i] << " (From: " << origin_city[i] << ")" << COLOR_RESET;
            }
        }

        cout << COLOR_YELLOW << "\n\nWould you like to calculate more passengers? (Y/N) " << COLOR_RESET;
        cin >> answer;

        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }

        passenger_name.clear();
        cin.ignore();
    } while (answer == 'y' || answer == 'Y');

    cout << "\n\n";
    system("pause");
    return 0;
}