#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>a[i] ;

    }

    int count=0;
    string p = a[0];
    for(int i=1 ;i<n;i++)
    {
        if(p!=a[i])
        {
            count++;
            p=a[i];
        }

    }
cout<<count+1;

}
