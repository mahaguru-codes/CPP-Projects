#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int randNum, inp, randNum2, res;
    randNum = rand() % 5 + 1;

    cout << "Enter your day of birth and imagine your question : " << endl;
    cin >> inp;

    randNum2 = inp + (rand() * rand() % 7);

    res = randNum2 % randNum;
    if (res == 0)
    {
        cout << "Drop the idea." << endl;
    }
    else if (res == 1)
    {
        cout << "Not a good idea, but you can give it a try." << endl;
    }
    else if (res == 2)
    {
        cout << "Quite good idea" << endl;
    }
    else if (res == 3)
    {
        cout << "Good idea, plan for it and go for it." << endl;
    }
    else if (res == 4)
    {
        cout << "Best idea you've got, just go for it." << endl;
    }
    else
    {
        cout << "You should think something else." << endl;
    }
    return 0;
}
