#include<iostream>
using namespace std;
int main()
{
 
int n ;
cin>> n;
for(int i = 1; i<=n;i++)
{
int p;
 
cin>>p;
int a[p];
 
for(int i =0 ;i<p;i++)
{
    cin>>a[i];
}
 
int fix=a[0];
 
for(int i =0 ;i<p-1;i++)
{
    if(a[i]>=fix)
    {
        fix = a[i];
    }
}
int q = p-1;
//cout<<fix<<endl;
cout<<fix+a[q]<<endl;
}
 
 
}
