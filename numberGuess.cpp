#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randNum = rand() % 50 + 1;
    cout << "Welcome to number guessing game!" << endl;
    cout << "Guess the random number between 1 and 50 in 5 attempts!" << endl;
    int guessNum;
    int attempt = 1;
    while (attempt <= 5)
    {
        cout << "Enter your guess for attempt " << attempt << " : " << endl;
        cin >> guessNum;

        if (guessNum == randNum)
        {
            cout << "Excellent guess!" << endl;
            break;
        }
        else if (guessNum < randNum)
        {
            cout << "Try with a bigger one!" << endl;
        }
        else
        {
            cout << "Try with a smaller one!" << endl;
        }

        attempt++;
        if (attempt > 5)
        {
            cout << "You lost!" << endl;
            cout << "The number was > " << randNum << endl;
        }
    }
    return 0;
}
