#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Colors //
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_YELLOW = "\033[1;33m";
    string const COLOR_GREEN = "\033[1;32m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    string name, tallest_name, youngest_name;
    int age, youngest_age, tall_people_count, total_ages = 0, over_35_count = 0;
    float height, age_average, tallest_height;
    char answer;

    do
    {
        youngest_age = 200;
        tallest_height = 0;
        tall_people_count = 0;
        total_ages = 0;
        over_35_count = 0;

        // Input //
        cout << COLOR_CYAN << "\n\n====> Welcome to the People Statistics! <====" << COLOR_RESET << endl;

        // Process //
        for (int i = 1; i <= 20; i++)
        {
            cout << COLOR_YELLOW << "\nEnter the name of the person: " << COLOR_RESET;
            getline(cin, name);
            cout << COLOR_YELLOW << "Enter the age of the person: " << COLOR_RESET;
            cin >> age;
            while (age < 0 || age > 99)
            {
                cout << COLOR_RED << "\nInvalid option! Age must be between 1 and 99: " << COLOR_RESET;
                cin >> age;
            }
            cout << COLOR_YELLOW << "Enter the height of the person (cm): " << COLOR_RESET;
            cin >> height;
            while (height < 0 || height > 300)
            {
                cout << COLOR_RED << "\nInvalid option! Height must be between 0 and 300 cm: " << COLOR_RESET;
                cin >> height;
            }
            if (height > tallest_height)
            {
                tallest_height = height;
                tallest_name = name;
            }
            if (age < youngest_age)
            {
                youngest_age = age;
                youngest_name = name;
            }
            if (height > 180)
            {
                tall_people_count++;
                total_ages += age;
            }
            if (age > 35)
            {
                over_35_count++;
            }
            cin.ignore();
        }
        if (tall_people_count > 0)
        {
            age_average = (total_ages * 1.0) / tall_people_count;
        }
        else
        {
            age_average = 0;
        }

        // Output //
        cout << COLOR_CYAN << "\n\n====> Final Report <====" << COLOR_RESET << endl;
        cout << COLOR_GREEN << "\nAverage age of people over 1.80m: " << fixed << setprecision(2) << age_average << COLOR_RESET;
        cout << COLOR_GREEN << "\nTotal of people over 35: " << over_35_count << COLOR_RESET;
        cout << COLOR_GREEN << "\nTallest person: " << tallest_name << " (" << tallest_height << " cm)" << COLOR_RESET;
        cout << COLOR_GREEN << "\nYoungest person name: " << youngest_name << COLOR_RESET;

        cout << COLOR_CYAN << "\n\nWould you like to calculate more people? (Y/N) " << COLOR_RESET;
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