#include <iostream>
#include <cmath>

/*
Implement a program where the user inputs two 3d vectors (x1,x2,x3) (y1,y2,y3)
And the result an output to the user of the distance between the two vectors

*/
using namespace std;

/* retrns the largest number of x, y, z*/
double max(double x, double y, double z) {
    if (x > y)
        if (x > z)
            return x;
        else
            return z;
    else
        if (y > z)
            return y;
        else
            return z;
}
/*returns the absolute value of x-y*/
double abs (double x, double y) {
    if (x-y>=0)
        return x-y;
    else
        return -1*(x-y);
}
/*returns the distance between the 3d vectors (x1,x2,x3) and (y1, y2, y3)*/
double dist(double x1, double x2, double x3, double y1, double y2, double y3) {
    return max(abs(y1,x1), abs (y2, x2), abs(y3, x3));
}

double Euclidean_dist(double x1, double x2, double x3, double y1, double y2, double y3) {
    return sqrt(pow((x1-y1),2)+pow(x2-y2,2)+pow(x3-y3,2));
} 

int main(void) {
    double x1, x2, x3;
    double y1, y2, y3;

    /*read the two integers*/
    cout << "Input the first vector (three integers):";
    cin >> x1 >> x2 >> x3;
    
    cout << "Input the second vector (three integers):";
    cin >> y1 >> y2 >> y3;

    cout << "The distance is: " << dist(x1, x2, x3, y1, y2, y3) << endl;
    cout << "The Euclidian distance is: " << Euclidean_dist(x1, x2, x3, y1, y2, y3) << endl;
    return 0;
}