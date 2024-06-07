#include<iostream>
using namespace std;
int main()
{
 int a ;
 cin>>a;
 int b[a];

 int count=0;
 int count1=0;
 int fix1;
 int fix2;
 for(int i = 0 ; i<a;i++)
    {
        cin>>b[i];


    }

     for(int i = 0 ; i<a;i++)
    {
       if(b[i]%2==0)
       {
           count++;
           fix1 = i+1;
       }
       if(b[i]%2==1)
       {
           count1++;
           fix2=i+1;
       }

    }
    if(count<count1)
    {
        cout<<fix1;
    }
    else
    {
        cout<<fix2;
    }




}
