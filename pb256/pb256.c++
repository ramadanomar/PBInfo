#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

ifstream inFile("test.in");

bool perfSquare(long int nr)
{
    long int s = sqrt(nr);
    return (s * s == nr);
}

bool esteFib(long int nr)
{
    return (perfSquare(5 * nr * nr + 4) || perfSquare(5 * nr * nr - 4));
}

int main()
{
    long int n, nr;
    //TEST
    //inFile >> n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
//        inFile >> nr;
        cin >> nr;
        if (esteFib(nr) == true)
            cout << "DA\n";
        else
            cout << "NU\n";
    }
    return 0;
}