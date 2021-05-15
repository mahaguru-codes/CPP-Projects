#include <iostream>
using namespace std;

// Function prototype
int fib(int);

int main()
{
    int index, callFunc;

    cout << "Enter an index till you want to print the fibonacci series : " << endl;
    cin >> index;

    cout << "The series is > " << endl;

    for (int i = 0; i <= index; i++)
    {
        cout << fib(i) << "\t"; // This will pass i to the fib() function each time the loop runs.
    }

    return 0;
}

//Actual recursive function
int fib(int n)
{
    if (n <= 1)  // Base condition
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

/*
Explanation of this code => 
This code accepts an index and print the fibonacci series from zero to given index.
I executed a for loop to recieve output from the fib() function.
Here fib() is a recursive function which keeps calling itself until a given base condition get satisfied. 
*/