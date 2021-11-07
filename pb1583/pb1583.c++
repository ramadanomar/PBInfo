#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("2prim.in");
ofstream cout("2prim.out");

int ultCif(int nr) {
    return nr%100;
}

int estePrim(int nr) {
    for(int i=2; i<=nr/2; i++)
        if (nr%i==0)
            return 0;
    return 1;
}


int main()
{
    int n, count = 0, nr;
    cin >> n;
    for(int i=0;i<n;i++)
        {
            cin >> nr;
            if(estePrim(ultCif(nr)))
                count++;
        }
    cout << count;
    return 0;
}