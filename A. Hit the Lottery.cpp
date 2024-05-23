
#include<iostream>
using namespace std;
int main()
 {    int count = 0;
    int a;
    cin>>a;
    int check =a;
    while(check>0)
    {

int sum5=check/1;
int sum4=check/5;
int sum3=check/10;
int sum2=check/20;
int sum1=check/100;
    if(sum1>0)
    {
    check = check -sum1*100;
    count = count + sum1;
   // cout<<"100";
    }
    else if (sum2>0)
    {
       check = check -sum2*20;
    count = count + sum2;
//cout<<"20";

    }
    else if (sum3>0)
    {
       check = check -sum3*10;
    count = count + sum3;
   //cout<<"10";

    }

    else if (sum4>0)
    {
       check = check -sum4*5;
    count = count + sum4;
  //cout<<"5";

    }

      else if (sum5>0)
    {
       check = check - sum5*1;
      count = count + sum5;
   // cout<<"1";

    }

    }
   cout<< count;
}
