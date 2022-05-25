#include <fstream>
using namespace std;

ifstream inFile("vacantadevara.in");
ofstream outFile("vacantadevara.out");

int v[9];

int main() {
    int n,tmp,nrn=0,p=1;
    inFile >> n;
    for(int i=1;i<=n;i++)
    {
        inFile >> tmp;
        v[tmp]++;
    }
    //Selectia primei cifre.
    if(v[1]) {
        nrn = 1 * p;
        p *=10;
        v[1]--;
    }
    else if(v[2]) {
        nrn = 2*p;
        p *=10;
        v[2]--;
    }
    else if(v[3]) {
        nrn = 3*p;
        p *=10;
        v[3]--;
    }
    else if(v[4]) {
        nrn = 4*p;
        p *=10;
        v[4]--;
    }
    else if(v[5]) {
        nrn = 5*p;
        p *=10;
        v[5]--;
    }
    else if(v[6]) {
        nrn = 6*p;
        p *=10;
        v[6]--;
    }
    else if(v[7]) {
        nrn = 7*p;
        p *=10;
        v[7]--;
    }
    else if(v[8]) {
        nrn = 8*p;
        p *=10;
        v[8]--;
    }
    else if(v[9]) {
        nrn = 9*p;
        p *=10;
        v[9]--;
    }

    outFile << nrn;
    for(int i=0;i<=9;i++)
    {
        for(int j=0; j<v[i]; j++)
            outFile << i;
    }

}
