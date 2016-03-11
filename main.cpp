//Ordonarea elementelor pare la inceput si impare la sfarsit
//by zeglIne
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("ord.in");
ofstream fout("ord.out");
int a[1000],n;
int main()
{
    fin>>n; unsigned i;
    for(i=1;i<=n;i++)
        fin>>a[i];
    unsigned j;
    i=1;
    j=n;
    while(i<j){
        if(a[i]%2==0) i++;
        if(a[j]%2!=0) j--;
        if(i<j&&a[i]%2==1&&a[j]%2==0)
        {swap(a[i],a[j]);
        i++;
        j--;
        }
        }








    for(i=1;i<=n;i++)
        fout<<a[i]<<" ";
    return 0;
}
