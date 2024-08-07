#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 1 ;i<=n;i++)
    {
     int a;
     int b;
     cin>>a;
     cin>>b;
     int sum=0;
     int multi=1;
     if(a>b)
     {
         sum = a-b;
         multi =  sum/10;
          if(sum%10==0)
         {
                     cout<<multi<<endl;
         }
         else

        cout<<multi+1<<endl;
     }
   else if(b>a)
     {
         sum = b-a;
         multi =  sum/10;
         if(sum%10==0)
         {
                     cout<<multi<<endl;
         }
         else

         cout<<multi+1<<endl;
     }
 else if(b==a)
 {
     cout<<0<<endl;
 }

    }
}
