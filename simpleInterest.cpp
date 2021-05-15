#include <iostream>
#include <iomanip>
using namespace std;

float totalAmount(float principalAmount, float rate, float year)
{
    float one_year_interest = (principalAmount * rate) / 100;
    float finalInterest = one_year_interest * year;
    float totalReturn = principalAmount + finalInterest;
    return totalReturn;
}

int main()
{
    float principalAmount, rate, year;
    cout << "Enter principal amount : " << endl;
    cin >> principalAmount;

    cout << "Enter annual rate : " << endl;
    cin >> rate;

    cout << "Enter year : " << endl;
    cin >> year;

    float finalAmount = totalAmount(principalAmount, rate, year);
    cout << "The final amount with " << rate << "% in " << year << " year(s) will be : "
         << fixed << setprecision(2) << finalAmount << endl;

    return 0;
}