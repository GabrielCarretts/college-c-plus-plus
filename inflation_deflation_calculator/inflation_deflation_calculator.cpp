#include <iostream>
#include <clocale>
#include <string>
using namespace std;
int main()

{
    setlocale(LC_ALL, "Portuguese");

    // Variables //
    float march_17_price, march_18_price, inflation_deflation;
    char answer;

    // Input //
    cout << "\033[1;36m" << "=====> Welcome to the inflation/deflation calculator! <=====\n\n" << "\033[0m";
    cout << "\033[34m" << "Inform the price on March 17th: U$ " << "\033[0m";
    cin >> march_17_price;
    cout << "\033[34m" << "Inform the price on March 18th: U$ " << "\033[0m";
    cin >> march_18_price;

    // Processess //
    inflation_deflation = (march_18_price - march_17_price) * 100 / march_17_price;

    // Output //
    if (inflation_deflation > 0)
    {
        cout << "\033[1;31m" << "\nInflation is: " << inflation_deflation << "%\n" << "\033[0m";
    }
    else if (inflation_deflation < 0)
    {
        cout << "\033[1;32m" << "\nDeflation is: " << inflation_deflation * -1 << "%\n" << "\033[0m";
    }
    else
    {
        cout << "\033[1;33m" << "\nThe price remained the same (no change.)\n" << "\033[0m";
    }

    system("pause");

    return 0;
}