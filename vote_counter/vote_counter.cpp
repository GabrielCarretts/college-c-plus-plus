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
    char answer;
    int c1, c2, c3, null, blank, total_votes, vote;
    float p1, p2, p3, p_null, p_blank;
    string winner;

    do
    {
        c1 = 0;
        c2 = 0;
        c3 = 0;
        null = 0;
        blank = 0;
        total_votes = 0;
        vote = 0;

        // Process //
        cout << UNDERLINED_TEXT << COLOR_BLUE << "\n\n====> Welcome to the vote counter! <====" << COLOR_RESET << endl;
        for (int i = 1; i <= 20; i++)
        {
            cout << COLOR_CYAN << "\nEnter your vote (1,2,3,4-null,5-blank): " << COLOR_RESET;
            cin >> vote;
            while (cin.fail() || vote < 1 || vote > 5)
            {
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
                cout << COLOR_RED << "Invalid vote! Must be a number from 1-5! Try again: " << COLOR_RESET;
                cin >> vote;
            }
            if (vote == 1)
            {
                c1++;
            }
            else if (vote == 2)
            {
                c2++;
            }
            else if (vote == 3)
            {
                c3++;
            }
            else if (vote == 4)
            {
                null++;
            }
            else
            {
                blank++;
            }
        }

        total_votes = c1 + c2 + c3 + null + blank;
        p1 = (c1 * 1.0) / total_votes * 100;
        p2 = (c2 * 1.0) / total_votes * 100;
        p3 = (c3 * 1.0) / total_votes * 100;
        p_null = (null * 1.0) / total_votes * 100;
        p_blank = (blank * 1.0) / total_votes * 100;

        if (c1 > c2 && c1 > c3)
            winner = "Candidate 1";
        else if (c2 > c1 && c2 > c3)
            winner = "Candidate 2";
        else if (c3 > c1 && c3 > c2)
            winner = "Candidate 3";
        else
            winner = "Tie";

        // Output //
        cout << fixed << setprecision(2);
        cout << COLOR_BLUE << UNDERLINED_TEXT << "\n\n====> Final Results <====" << COLOR_RESET << endl;
        cout << COLOR_CYAN << "\nCandidate 1: " << c1 << " votes (" << p1 << "%)" << COLOR_RESET;
        cout << COLOR_CYAN << "\nCandidate 2: " << c2 << " votes (" << p2 << "%)" << COLOR_RESET;
        cout << COLOR_CYAN << "\nCandidate 3: " << c3 << " votes (" << p3 << "%)" << COLOR_RESET;
        cout << COLOR_CYAN << "\nNull votes: " << null << " (" << p_null << "%)" << COLOR_RESET;
        cout << COLOR_CYAN << "\nBlank votes: " << blank << " (" << p_blank << "%)" << COLOR_RESET;
        cout << COLOR_GREEN << "\n\nWinner: " << winner << "!" << COLOR_RESET << endl;

        cout << COLOR_BLUE << "\n\nWould you like to calculate more votes? (Y/N) " << COLOR_RESET;
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