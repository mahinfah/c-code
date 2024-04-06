#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a ;
    cin>>a;
   for(int i=1; i<=a;i++)
    {
        int b;
      cin>>b;
      if(b%2==0)
      {
          int sum= b/2;
          int rum = sum-1;
          cout<<rum<<endl;
      }
      if(b%2!=0)
      {
          int sum2=b/2;
          cout<<sum2<<endl;
      }

}}



