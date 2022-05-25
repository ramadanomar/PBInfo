/*
Un tablou bidimensional cu număr impar de coloane este numit simetric faţă de coloana din mijloc dacă, pe fiecare linie a
tabloului, elementele dispuse simetric faţă de elementul din mijloc al liniei respective au valori egale.

Scrieţi un program care citește de la tastatură două numere naturale, m și n (n impar), și elementele unui tablou
bidimensional cu m linii și n coloane, numere naturale. Programul afișează pe ecran mesajul DA, dacă tabloul este
simetric față de coloana din mijloc, sau mesajul NU în caz contrar.
*/

#include <iostream>
#include <fstream>
using namespace std;

//ifstream inFile("/Users/omar/liceu/pbinfo/3120/test.in");

int main() {
    int m,n,mij,ok=1;
    int a[21][21];
    //inFile >> m >> n;
    cin >> m >> n;
    mij = n/2+1;

    //cout << mij;
    for(int i=1;i<=m;i++)
        for(int j=1; j<=n;j++) {
            cin >> a[i][j];
            //inFile >> a[i][j];
        }
    int i=1;
    for(int i=1;i<=m;i++)
        for(int j=1;j<mij;j++) {
            if(a[i][j] != a[i][n-j+1])
                ok=0;
        }
    if(ok)
        cout << "DA";
    else
        cout << "NU";
}
