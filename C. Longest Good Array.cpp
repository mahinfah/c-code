#include<iostream>

//https://codeforces.com/contest/2008/problem/C
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {



    int l,r;
    cin>>l;
    cin>>r;
    int count=0;
     int ii =1;
    while(l<=r)
    {

        l=l+ii;
        ii++;
        count++;
        //cout<<count<<"  ";

    }
    cout<<count<<endl;
    }
}
