#include<iostream>
using namespace std;
int main()

{
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];

    }
    int maxx=a[0];
    int sum = 0;
    for(int i = 0 ; i<n;i++)
    {
        if(a[i]>=maxx)
        {
            maxx = a[i];
        }
    }
    for(int i = 0 ; i<n;i++)
    {
        if(a[i]<maxx)
        {
            sum = sum +(maxx-a[i]) ;
        }

    }
    cout<<sum;

    }
