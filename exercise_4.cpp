#include <iostream>

/*
Implement a program that solves two linear equations with two unknowns IF there exists a unique solution.
a11x+a12y=c1
a21x+a22y=c2
First the program writes:  ”input the matrix values in order  a11 a12 a21 a22”
Read these values into the program.
Write immediately to the user whether a unique solution exists.
IF NOT terminate the program
ELSE
Prompt the user with:  ”input the values  c1 c2”
Read these values from the input
Present the solution to the user.

*/
using namespace std;
int main(void) {
    double a11, a12, a21, a22;
    cout << "input the matrix values in order  a11 a12 a21 a22: ";

    cin >> a11 >> a12 >> a21 >> a22;

    double det = (a11*a22)-(a21*a12);
    if (det == 0)  {/* no soultion exsists*/
        cout << "No solution exsists";
        return 0;
    } else {/*a solution exsists*/
        double c1, c2;
        cout << "”input the values  c1 c2: ";
        cin >> c1 >> c2;
        double x =  (1/det)*(a22*c1-a12*c2);
        double y = (1/det)*(-a21*c1+a11*c2);
        cout << "The solution is: " << x << "," << y << endl; 
    }
    return 0;
}