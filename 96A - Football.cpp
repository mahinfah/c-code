#include<iostream>
#include<string.h>
using namespace std;
int main()

{
   string n;
cin>>n;
  int  m = n.length();
  int count  =  0 ;
  int count1  =  0 ;
   bool check = false;
 bool check1 = false;
 for(int i = 0;i<m ; i++)

    {


    if(n[i]=='0')
    {
        count++;
        count1=0;
        if(count==7)
        {
           check = true        ;
            break;
        }
    }


    else if(n[i]=='1')
    {
        count1++;
        count=0;
        if(count1==7)
        {
           check1 = true        ;
            break;
        }
    }
    }
        if(check==true||check1==true)
        {
            cout<<"YES";

        }
        else
        {
            cout<<"NO";
        }
}
