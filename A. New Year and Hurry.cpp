#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a;

    cin>>b;
    int sum=1;
    int s=0;


    for(int i=1;i<=a;i++)
    {
        s = s+ (i*5);
        if(s+b>240)
        {

            cout<<i-1;
            break;
        }



        }
          if(s+b==240)
        {
            cout<<a;

        }
            if(s+b<240)
        {
            cout<<a;

        }


    }
    //cout<<endl;
   // cout<<s;


