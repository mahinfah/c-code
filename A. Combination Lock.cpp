#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;

   cin>>n;
    string a;
    string b;
cin>>a;
cin>>b;
int sume=0;
    for(int i = 0;i<n;i++)
    {
 //     cin>>a[i];
    }

  //checking
     for(int i = 0;i<a.length();i++)
     {
       int real=0,sum =0,fake=0;
       if(a[i]<b[i])
       {
           sum=10 + a[i];
           real = sum -b[i];
           fake =b[i]-a[i];

           if(real<=fake)
           {
                sume=sume+real;
       //        cout<<real;
           }
           if(fake<real)
           {
                sume=sume+fake;
         //      cout<<fake;
           }
       }
         if(a[i]>b[i])
       {
           sum=10 + b[i];
           real = sum -a[i];
           fake =a[i]-b[i];

           if(real<=fake)
           {
             sume=sume+real;
//               cout<<real;
           }
           if(fake<real)
           {
                sume=sume+fake;
  //             cout<<fake;
           }
       }



     }
     cout<<sume;


}
