// Se dă un șir cu n elemente, numere naturale și un număr k. Să se determine câte secvențe din șir au lungimea k și
// sunt formate din valori mai mici sau egale cu t, unde t este ultimul element al șirului.

//Fișierul de intrare lowmem.in conține pe prima linie numerele n și k, iar pe cea de-a doua linie cele n elemente ale
//șirului.

//Fișierul de ieșire lowmem.out va conține valoarea nrs, reprezentând numărul secvențelor din șir de lungime k, care
// sunt formate din valori mai mici sau egale cu t.

#include <iostream>
#include <fstream>
using namespace std;

int t;
int v[9];
ifstream inFile("/Users/omar/liceu/pbinfo/3940/lowmem.in");
ofstream ofFile("lowmem.out");

int main() {
    int n,k, maxSir=-1,tmp=-1;
    inFile >> n >> k;
    //cout << n;

    for(int i=1;i<=n;i++)
    {
        inFile >> tmp;

        if(tmp>maxSir)
            maxSir=tmp;
        if(i==n)
        {t = tmp;cout<<t<<endl;}
        cout << "Runda i=" << i << " tmp=" << tmp << " k=" << k << " maxSir=" << maxSir << endl;
        if(i%k==0)
        {
            for(int j=0;j<maxSir;j++) {
                v[j]++;
                cout << endl << "Accesat\n";
               // cout << endl << "V[J]" << v[j];
            }
            maxSir = -1;
        }

    }
    cout << v[t];
}
