https://codeforces.com/problemset/problem/1829/B
#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;

    for(int i =1;i<=m;i++)
    {



    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int c=0;
    for(int i=0 ; i<n;i++)
    {

         if(a[i]==0)
         {
             c++;
         }
         if(c>sum)
         {

             sum=c;
         }
         if(a[i]!=0)
         {
             c=0;
         }



    }
    cout<<sum<<endl;


    }


}
