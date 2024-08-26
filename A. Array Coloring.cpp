#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =1 ;i<=n;i++)
    {
        int m ;
        cin>>m;
          int  a[m];
       int even=0,odd=0;
       for(int i=0;i<m;i++)
       {
           cin>>a[i];
       }




        for(int i=0;i<m;i++)
       {
           if(a[i]%2==0)
           {
               even++;
           }
           else if(a[i]%2!=0)
           {
               odd++;
           }

       }

       if(odd%2==0)
       {
           cout<<"YES"<<endl;

       }

       if(odd%2!=0)
       {
           cout<<"NO"<<endl;

       }



    }
}
