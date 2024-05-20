#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int n ;
 cin>>n;
 for(int i =1 ; i<=n ; i++)
 {
   int count =  0 ;
string a ;
 cin>>a;

      for(int j = 0 ; j<a.length();j++)
      {
          if(a[0]==a[j])
          {
              count++;
          }
      }
      if(count==a.length())

      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
          for(int i =1 ;i<a.length();i++)
          {
             cout<<a[i];

          }
          cout<<a[0];
          cout<<endl;
      }
 }

}
