#include <iostream>

/*
Implement a program taking two integers as input

And that writes to output:
if
The first is greater than the second (if that is the case!)
else if
The second is greater than the first (if that is the case!)
else
The numbers are equal

The program should additionally write the sum and the product of the numbers to output
*/
using namespace std;
int main(void) {
    int first;
    int second;

    /*read the two integers*/
    cout << "Input two integers:";
    cin >> first >> second;
    if (first>second)
        cout << "The first is greater than the second";
    else if (second > first)
        cout << "The second is greater than the first";
    else /*equal*/
        cout << "The numbers are equal";
    cout << endl;


    return 0;
}