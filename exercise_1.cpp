#include <iostream>

/*
Implement a program that prompts the user to input an integer, and subsequently determines the numbers sign and parity(even or odd). The program should present the following output:
 - "The number is positive and even."
 - "The number is positive and odd."
 - "The number is negative and even."
 - "The number is negative and odd."
 - "The number is zero.“
Depending on the number of course
Hints:
Nested if statement can be used here.
To test an integer for parity, use the modulus operator %, which gives the rest in division. That is 7%3=1 because the rest is  1  23%3=2 because the rest 2. In this way
 x%2==0  if x is even og x%2!=0 if x is odd
*/
using namespace std;
int main(void) {
    int number;

    /*read the  integers*/
    cout << "Input an integers:";
    cin >> number;
    if (number>0) /*positive number*/
        if (number%2==0) /*even number*/
            cout << "The number is positive and even.";
        else /*odd number*/
            cout << "The number is positive and even.";
    else if (number < 0) /*negative number*/
        if (number%2==0) /*even number*/
            cout << "The number is negative and even.";
        else /*odd number*/
            cout << "The number is negative and even.";
    else /*equal*/
        cout << "The numbers is zero";
    cout << endl;


    return 0;
}