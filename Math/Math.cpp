#include <iostream>
#include <cmath>
using namespace std;

float avg(float a, float b)
{
    float r = (a+b)/2;
    return r;
}

int main()
{
    cout << "min " << min(7,12) << endl;
    cout << "max " << max(8,14) << endl;
    cout << "avg " << avg(10,11) << endl;
    cout << "sqrt " << sqrt(81) << endl;
    cout << "1/3 = " << 1./3 << endl;
    float n = 1.0/3;
    cout << "n * 3 = " << n*3<< endl;
    return 0;
}
