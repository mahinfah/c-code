//A. Anton and Polyhedr
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int b;
    cin>>b;
    int count=0 ;
    for(int i =1 ;i<=b;i++)
    {
    string a;
    cin  >>a;
    if(a[0]=='I')
    {
        count = count + 20;
    }
    else if (a[0]=='C')
    {
        count=count+6;
    }

    else if (a[0]=='O')
    {
        count=count+8;
    }
    else if (a[0]=='D')
    {
        count=count+6+6;
    }
    else if (a[0]=='T')
    {
        count=count+4;
    }

    }
cout<<count;
}
