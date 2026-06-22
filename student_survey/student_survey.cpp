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
    string const COLOR_RESET = "\033[0m";

    // Variables //
    vector<string> student_name, student_gender;
    vector<int> student_age;
    vector<double> student_grade;
    char answer;
    string temp_name, temp_gender;
    int temp_age;
    double temp_grade;

    // Input //
    do
    {
        cout << COLOR_CYAN << "\n\n====> UNIPLAC'S Student Survey <====" << COLOR_RESET;
        while (true)
        {
            cout << COLOR_YELLOW << "\nEnter the student's name (or 'end' to stop): " << COLOR_RESET;
            getline(cin, temp_name);
            if (temp_name == "end" || temp_name == "End" || temp_name == "END")
            {
                break;
            }
            student_name.push_back(temp_name);

            cout << COLOR_YELLOW << "Enter the student's age: " << COLOR_RESET;
            cin >> temp_age;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << COLOR_RED << "Invalid character! Must be a number (10-100)! Try again: " << COLOR_RESET;
                cin >> temp_age;
            }
            while (temp_age < 10 || temp_age > 100)
            {
                cout << COLOR_RED << "Invalid character! Must be a number (10-100)! Try again: " << COLOR_RESET;
                cin >> temp_age;
            }
            student_age.push_back(temp_age);

            cout << COLOR_YELLOW << "Enter the student's gender (1-male 2-female): " << COLOR_RESET;
            cin >> temp_gender;
            while (temp_gender != "1" && temp_gender != "2")
            {
                cout << COLOR_RED << "Invalid character! Must be a number (1-2)! Try again: " << COLOR_RESET;
                cin >> temp_gender;
            }
            student_gender.push_back(temp_gender);

            cout << COLOR_YELLOW << "Enter the student's grade: " << COLOR_RESET;
            cin >> temp_grade;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << COLOR_RED << "Invalid character! Must be a number (1-10)! Try again: " << COLOR_RESET;
                cin >> temp_grade;
            }
            while (temp_grade < 1 || temp_grade > 10)
            {
                cout << COLOR_RED << "Invalid character! Must be a number (1-10)! Try again: " << COLOR_RESET;
                cin >> temp_grade;
            }
            student_grade.push_back(temp_grade);
            cin.ignore();
        }

        // Process //

        // Safety check: Only process if at least one student was entered
        if (student_name.empty())
        {
            cout << COLOR_RED << "\nNo students were entered on this run." << COLOR_RESET;
        }
        else
        {

            // Age Average //
            int total_age = 0;
            double age_average = 0;
            for (int i = 0; i < student_age.size(); i++)
            {
                total_age = total_age + student_age[i];
            }
            age_average = (double)total_age / student_age.size();

            // Scanning for "Joe" //
            for (int i = 0; i < student_name.size(); i++)
            {
                if (student_name[i] == "Joe")
                {
                    cout << COLOR_GREEN << "\nHey Joe! Sending you a hug!" << COLOR_RESET;
                }
            }

            // Male and female grade average and comparison //
            int male_count = 0;
            int female_count = 0;
            double male_grade_average = 0;
            double female_grade_average = 0;
            double male_grade = 0;
            double female_grade = 0;
            for (int i = 0; i < student_grade.size(); i++)
            {
                if (student_gender[i] == "1")
                {
                    male_grade = male_grade + student_grade[i];
                    male_count++;
                }
                else if (student_gender[i] == "2")
                {
                    female_grade = female_grade + student_grade[i];
                    female_count++;
                }
            }
            if (male_count > 0)
            {
                male_grade_average = male_grade / male_count;
            }
            if (female_count > 0)
            {
                female_grade_average = female_grade / female_count;
            }

            cout << COLOR_CYAN << "\n\n====> RESULTS <====" << COLOR_RESET;
            cout << fixed << setprecision(2);
            cout << COLOR_CYAN << "\n\n====> Age Average <====" << COLOR_RESET;
            cout << COLOR_GREEN << "\nThe age average of the class is " << age_average << " years" << COLOR_RESET;
            cout << COLOR_CYAN << "\n\n====> Grade Average <====" << COLOR_RESET;
            if (male_grade_average > female_grade_average)
            {
                cout << COLOR_GREEN << "\nThe male students have the higher grade average with " << male_grade_average << " years" << COLOR_RESET;
            }
            else if (female_grade_average > male_grade_average)
            {
                cout << COLOR_GREEN << "\nThe female students have the higher grade average with " << female_grade_average << " years" << COLOR_RESET;
            }
            else
            {
                cout << COLOR_GREEN << "\nThe grade averages are the same!" << COLOR_RESET;
            }

            // Youngest and oldest student //
            int oldest_index = 0;
            int youngest_index = 0;
            for (int i = 0; i < student_age.size(); i++)
            {
                if (student_age[i] > student_age[oldest_index])
                {
                    oldest_index = i;
                }
                else if (student_age[i] < student_age[youngest_index])
                {
                    youngest_index = i;
                }
            }
            cout << endl;
            cout << COLOR_CYAN << "\n====> Oldest student <====" << COLOR_RESET;
            cout << COLOR_GREEN << "\nName: " << student_name[oldest_index];
            cout << "\nAge: " << student_age[oldest_index];
            cout << "\nGender: ";
            if (student_gender[oldest_index] == "1")
            {
                cout << "Male";
            }
            else
            {
                cout << "Female";
            }
            cout << "\nGrade: " << student_grade[oldest_index] << COLOR_RESET;

            cout << endl;
            cout << COLOR_CYAN << "\n====> Youngest student <====" << COLOR_RESET;
            cout << COLOR_GREEN << "\nName: " << student_name[youngest_index];
            cout << "\nAge: " << student_age[youngest_index];
            cout << "\nGender: ";
            if (student_gender[youngest_index] == "1")
            {
                cout << "Male";
            }
            else
            {
                cout << "Female";
            }
            cout << "\nGrade: " << student_grade[youngest_index] << COLOR_RESET;

            // Best Student //
            int best_student_index = 0;
            for (int i = 0; i < student_grade.size(); i++)
            {
                if (student_grade[i] > student_grade[best_student_index])
                {
                    best_student_index = i;
                }
            }

            cout << endl;
            cout << COLOR_CYAN << "\n====> Best student <====" << COLOR_RESET;
            cout << COLOR_GREEN << "\nName: " << student_name[best_student_index];
            cout << "\nAge: " << student_age[best_student_index];
            cout << "\nGender: ";
            if (student_gender[best_student_index] == "1")
            {
                cout << "Male";
            }
            else
            {
                cout << "Female";
            }
            cout << "\nGrade: " << student_grade[best_student_index] << COLOR_RESET;
        }

        cout << COLOR_YELLOW << "\n\nWould you like to input more students? (Y/N) " << COLOR_RESET;
        cin >> answer;

        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }

        student_name.clear();
        student_age.clear();
        student_gender.clear();
        student_grade.clear();
        cin.ignore();
    } while (answer == 'y' || answer == 'Y');

    cout << "\n\n";
    system("pause");
    return 0;
}