#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;

  cin>>a;

  if(a.length()==1)
  {

cout<<a;
  }
  else{


  for(int i = 0 ;i<a.length();i=i+2)
  {

   for(int j= 0 ;j<a.length()-1;j=j+2)
   {
       if(a[j]>a[j+2])
       {
           char temp ;
           temp = a[j];
           a[j]=a[j+2];
           a[j+2]=temp;
       }
   }
     // cout<<a[i];
  }

  for(int i = 0 ;i<a.length();i++)
  {
      cout<<a[i];
  }
  }
}
