#include <iostream>
#include <iomanip>  // This header is used for input/output manipulation, like formatting.
using namespace std;

// Function prototype; params are: complete array, size of array and maximum value for an entity
float percent(float*, int, int);
int main()
{
    int size;
    float callFun;
    int one_mark;

    cout << "Enter maximum marks for an entity : " << endl;
    cin >> one_mark;

    cout << "Enter the number of entities : " << endl;
    cin >> size;

    // An array of user given size, accepting the same values from user
    float myArr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the marks for entity " << i + 1 << endl;
        cin >> myArr[i];
    }

    // Calling the function and passing array, size and max. mark for an entity
    callFun = percent(myArr, size, one_mark);

    // Output is formatted upto two decimal digits
    cout << "Total percentage is : " << fixed << setprecision(2) << callFun << endl;
    return 0;
}

// Actual function
float percent(float arr[], int size, int one_mark)
{
    int sum = 0;
    float percentage;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    // These values are typecasted into float, because percentage can be in floating point.
    percentage = float((sum * 100) / (size * one_mark));

    // Here (size * one_mark) is actually calculating maximum marks for all values to determine percentage
    // according to the percentage formula.
    // Like, we have 5 subjects, in which each one is having maximum marks of 100, so total value will be
    // size * one_mark = 5 x 100 = 500, now this value will be used to calculate percentage.

    return percentage;
}