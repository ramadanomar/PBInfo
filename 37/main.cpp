#include <iostream>
using namespace std;

int nz(int n){
    int s = 0;
    unsigned long long k = n, p=5;
    while(p<=k)
        s+=k/p, p *=5;
    return s;
}

int main() {
    cout << nz(110);
}
