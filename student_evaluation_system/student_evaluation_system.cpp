#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Colors //
    // Colors //
    string const COLOR_BLUE = "\033[1;34m";
    string const COLOR_YELLOW = "\033[1;33m";
    string const COLOR_GREEN = "\033[1;32m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    string student_name;
    char answer;
    float student_grade, highest_grade, lowest_grade, final_average, total_grades = 0;
    int students_failed, students_bombed;
    bool has_zero = false;

    do
    {
        total_grades = 0;
        has_zero = false;
        highest_grade = -1;
        lowest_grade = 11;
        students_failed = 0;
        students_bombed = 0;

        // Input //
        cout << COLOR_BLUE << "\n\n====> Welcome to the Student Evaluation System! <====" << COLOR_RESET << endl;

        // Process //
        for (int i = 1; i <= 20; i++)
        {
            cout << COLOR_YELLOW << "\nEnter the name of the student: " << COLOR_RESET;
            getline(cin, student_name);
            cout << COLOR_YELLOW << "Enter the student grade (0-10): " << COLOR_RESET;
            cin >> student_grade;
            while (student_grade < 0 || student_grade > 10)
            {
                cout << COLOR_RED << "\nInvalid option! Grade must be positive and equal or lower than 10: " << COLOR_RESET;
                cin >> student_grade;
            }

            total_grades += student_grade;
            if (student_grade == 0)
            {
                has_zero = true;
                students_bombed++;
            }
            if (student_grade > highest_grade)
            {
                highest_grade = student_grade;
            }
            if (student_grade < lowest_grade)
            {
                lowest_grade = student_grade;
            }
            if (student_grade < 7)
            {
                students_failed++;
            }
            cin.ignore();
        }
        final_average = total_grades / 20;

        // Output //
        cout << COLOR_BLUE << "\n\n====> Final Report <====" << COLOR_RESET;
        cout << COLOR_GREEN << "\nFinal grade average: " << fixed << setprecision(2) << final_average << COLOR_RESET;
        cout << COLOR_GREEN << "\nHighest grade: " << highest_grade << COLOR_RESET;
        cout << COLOR_RED << "\nLowest grade: " << lowest_grade << COLOR_RESET;
        cout << COLOR_RED << "\nStudents failed: " << students_failed << COLOR_RESET;
        cout << COLOR_RED << "\nStudents that got 0: " << students_bombed << COLOR_RESET;

        cout << COLOR_BLUE << "\n\nWould you like to calculate more grades? (Y/N) " << COLOR_RESET;
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
