#include <bits/stdc++.h>
using namespace std;
int prim(int n)
{
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i=3;i*i<=n;i += 2)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    ifstream fin("2prim.in");
    ofstream fout("2prim.out");
    int n,cate=0,x;
    fin >> n;
    for(int i=1;i<=n;++i)
    {
        fin >> x;
        if(prim(x%100)) cate++;
    }
    fout << cate;
    fin.close();
    fout.close();
    return 0;
}