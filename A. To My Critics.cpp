#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int n;


    cin>>n;
    //int a[n];

    for(int i =1 ;i<=n;i++)
     {
        int a,b,c;
        cin>>a>>b>>c;

          if(a+b>=10||a+c>=10||b+c>=10)
          {
              cout<<"YES"<<endl;

          }
      else{
        cout<<"NO"<<endl;
      }

     }
}
