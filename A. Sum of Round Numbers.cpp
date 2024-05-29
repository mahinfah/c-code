#include<iostream>
using namespace std;
int main()
{
   int n , m;
   cin>>n;
   //cin>>m;

   int count = 0 ;

    for(int i = 0; i<n ; i++)
    {
   int a ;
   cin>>a;
       if(a<10&&a>0)
       {
           cout<<"1"<<endl;
           cout<<a<<endl;
       }
       if(a%10==0)
          {

           cout<<"1"<<endl;
           cout<<a<<endl;

          }
          if(a%10!=0)
          {

          }


    }

}
