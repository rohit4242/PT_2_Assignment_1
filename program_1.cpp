// Q.1) Write a program that reads in 10 numbers and displays 
// their average, and the largest of the numbers (assume that all the 
// inputs are positive integers).

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, largest = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        if (num > largest)
        {
            largest = num;
        }
    }
    cout << "The average is: " << sum / 10 << endl;
    cout << "The largest number is: " << largest << endl;
    return 0;
}

