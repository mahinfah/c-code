
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;
    int s=1;
    int bi=1;
int sum=1;

int rum=1;
int dum =1;
int mum=1;


    //if(a==1||b==1||c==1){

         s = a*b*c;
           bi = a+b+c;
           sum = (a*b)+c;
            rum=(a+b)*c;
            dum = a+(b*c);
            mum= a*(b+c);
if(s>=bi&&s>=sum&&s>=rum&&s>=mum&&s>=dum){
            cout<<s;
        }
        else if (bi>=s&&bi>=sum&&bi>=rum&&bi>=mum&&bi>=dum){
            cout<<bi;
        }
        else if (sum>=s&&sum>=bi&&sum>=rum&&sum>=mum&&sum>=dum){
            cout<<sum;
        }
        else if (rum>=s&&rum>=sum&&rum>=bi&&rum>=mum&&rum>=dum){


            cout<<rum;
    }
    else if(dum>=s&&dum>=sum&&dum>=bi&&dum>=mum&&dum>=rum){
        cout<<dum;
    }
    else if(mum>=s&&mum>=sum&&mum>=bi&mum>=dum&&mum>=rum){
        cout<<mum;
    }
















     // if(a==1&&b==1&&c==1){

        //  sum = a+b+c;
          // cout<<sum;}

    //}
}
