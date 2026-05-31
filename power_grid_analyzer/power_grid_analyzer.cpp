#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_BLUE = "\033[1;34m";
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_GREEN = "\033[1;32m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    int consumer_number, consumption_type;
    float kwh_consumed, total_cost;
    float total_consumption_residential, total_consumption_commercial, total_consumption_industrial;
    float max_consumption, total_overall;
    string max_category;
    char answer;

    // Process //
    do
    {
        total_consumption_residential = 0;
        total_consumption_commercial = 0;
        total_consumption_industrial = 0;
        total_overall = 0;
        max_consumption = 0;
        max_category = "";

        cout << COLOR_BLUE << UNDERLINED_TEXT << "\n\n====> Welcome to the Power Grid Analyzer! <====" << COLOR_RESET << endl;
        do
        {
            cout << COLOR_CYAN << "\nEnter the consumer number (0 to stop): " << COLOR_RESET;
            cin >> consumer_number;
            while (cin.fail() || consumer_number < 0)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << COLOR_RED << "Invalid number! Try again: " << COLOR_RESET;
                cin >> consumer_number;
            }

            if (consumer_number != 0)
            {
                cout << COLOR_CYAN << "Enter the kWh consumed: " << COLOR_RESET;
                cin >> kwh_consumed;
                while (cin.fail() || kwh_consumed < 0)
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << COLOR_RED << "Invalid kWh! Must be a positive number! Try again: " << COLOR_RESET;
                    cin >> kwh_consumed;
                }

                cout << COLOR_CYAN << "Enter the consumer type (1-Residential, 2-Commercial, 3-Industrial): " << COLOR_RESET;
                cin >> consumption_type;
                while (cin.fail() || consumption_type < 1 || consumption_type > 3)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                    cout << COLOR_RED << "Invalid consumer type! Please enter 1, 2, or 3: " << COLOR_RESET;
                    cin >> consumption_type;
                }
                if (consumption_type == 1)
                {
                    total_cost = kwh_consumed * 0.3;
                    total_consumption_residential += kwh_consumed;
                }
                else if (consumption_type == 2)
                {
                    total_cost = kwh_consumed * 0.5;
                    total_consumption_commercial += kwh_consumed;
                }
                else
                {
                    total_cost = kwh_consumed * 0.7;
                    total_consumption_industrial += kwh_consumed;
                }
                cout << COLOR_GREEN << "Total cost for consumer " << consumer_number << ": $" << fixed << setprecision(2) << total_cost << COLOR_RESET << endl;
            }
        } while (consumer_number != 0);
        total_overall = total_consumption_residential + total_consumption_commercial + total_consumption_industrial;

        if (total_overall == 0)
        {
            cout << COLOR_RED << "\nNo consumption was recorded on the grid!" << COLOR_RESET << endl;
        }
        else
        {
            cout << COLOR_BLUE << UNDERLINED_TEXT << "\n\n====> Grid Analytics <====" << COLOR_RESET << endl;
            cout << COLOR_CYAN << "\nTotal consumption for Residential: " << total_consumption_residential << " kWh" << COLOR_RESET;
            cout << COLOR_CYAN << "\nTotal consumption for Commercial: " << total_consumption_commercial << " kWh" << COLOR_RESET;
            cout << COLOR_CYAN << "\nTotal consumption for Industrial: " << total_consumption_industrial << " kWh" << COLOR_RESET << endl;
            if (total_consumption_residential > max_consumption)
            {
                max_consumption = total_consumption_residential;
                max_category = "Residential";
            }
            if (total_consumption_commercial > max_consumption)
            {
                max_consumption = total_consumption_commercial;
                max_category = "Commercial";
            }
            if (total_consumption_industrial > max_consumption)
            {
                max_consumption = total_consumption_industrial;
                max_category = "Industrial";
            }

            cout << COLOR_GREEN << "\nThe category that consumes the most is: " << max_category << " with " << max_consumption << " kWh!" << COLOR_RESET << endl;
        }

        cout << COLOR_BLUE << "\nDo you want to analyze another grid? (Y/N): " << COLOR_RESET;
        cin >> answer;

        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "Invalid answer! Please enter Y or N: " << COLOR_RESET;
            cin >> answer;
        }
        cin.ignore();

    } while (answer == 'y' || answer == 'Y');

    cout << endl;
    system("pause");
    return 0;
}