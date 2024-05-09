#include<iostream>
using namespace std;
int main()
{
    int a ;
    cin>>a;
   int b [4];


for(int i = 1 ;i<=a ; i++)
{int count  =   0  ;

    for(int j = 0;j<4;j++)
    {        cin>>b[j];
       if(b[0]<b[j])
       {
           count++;
       }
    }
    cout<<count<<endl;
}




}
