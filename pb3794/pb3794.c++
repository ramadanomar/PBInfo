#include <iostream>
#include <fstream>

using namespace std;

ifstream inFile ("file.in");
ofstream ofFile ("file.out");

int main()
{
    int n, m,v1[100000],v2[100000];
     
    inFile >> n >> m;

    for(int i=0; i<n; i++)
        inFile >> v1[i];

    for(int i=0; i<m; i++)
        inFile >> v2[i];


    int c1=0,c2=0,vf[200000],size = 0;

    while(c1!=n || c2 !=m)
    {
        if(c2>m) // Vectorul V2 este termiant
        {
            vf[size] = v1[c1];
            size++;
            c1++;
        }

        if(c1>n) // Vectorul V1 este termiant
        {
            vf[size] = v2[c2];
            size++;
            c2++;
        }

        if(c1<n && c2<m)
        {
            if(v1[c1]>v2[c2])
            {
                vf[size] = v2[c2];
                size++;
                c2++;
            }
            else
            {
                vf[size] = v1[c1];
                size++;
                c2++;
            }
        }
    }
}