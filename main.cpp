#include <iostream>

using namespace std;

void squareroot(double);

int main ()
{
    double m;

    cout << "enter your number ";
    cin >> m;

    squareroot(m);

    return 0;
}

void squareroot(double n)
{
    int i;
    double t;
    double result;

    for (i = 0; i*i <= n ; i++)
    {
        t = i;
    }

    //result = t + (1 / (2*t))*(n - t*t);
    cout << "the result of square root is " << t + (1 / (2*t))*(n - t*t);
}
