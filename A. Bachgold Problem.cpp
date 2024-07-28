
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int c=1;
     if(n%2==0)
     {
         c=n/2;
         cout<<c<<endl;
        for(int i = 1 ;i<=c;i++)
        {
            cout<<2<<" ";
        }
     }
     if(n%2!=0)
     {
         c=n/2;
         cout<<c<<endl;
        for(int i = 1 ;i<=c-1;i++)
        {
            cout<<2<<" ";
        }
         cout<<3;
     }





    }


