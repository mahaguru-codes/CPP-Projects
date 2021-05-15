#include <iostream>
#include <iomanip>
using namespace std;

double avg;
int i;

float getAverage(float arr[], int size);

// Main function
int main()
{
    int size, j;
    cout << "Enter desired number of digits you want to find average of : " << endl;
    cin >> size;

    float arr[size];

    for (j = 0; j < size; ++j)
    {
        cout << "Value of item " << j + 1 << " : " << endl;
        cin >> arr[j];
    }

    avg = getAverage(arr, size);

    cout << "Average of your digits is : " << fixed << setprecision(2) << avg << endl;
    return 0;
}

// Function declaration
float getAverage(float myArr[], int size)
{
    int sum = 0;

    for (i = 0; i < size; ++i)
    {
        sum = sum + myArr[i];
    }
    avg = double(sum) / size;

    return avg;
}

/*
Explanation of this code =>
This code is designed for finding average of any count of digits entered by user.
First of all, declared some global variables for use in multiple functions.
Then created a function prototype for getAverage function => float getAverage(datatype, datatype);
Then created a function which is returning average (avg), first it start from zero and going to user defined size.
Then it stored all additions to 'sum' variable.
Then it divided total sum by array size.
Then returned average (avg).
Entered in main function, accepted all values and stored them into and as all elements of array.
Then called getAverage function by declaring its object. Here array name and array size is given.
Then printed average.
*/