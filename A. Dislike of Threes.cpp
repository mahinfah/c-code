#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int j = 1 ; j<= n ;j++)
    {
        int a;
        cin>>a;
        int count=0;
        int p[1000];
         // int i = 1;
          int jj = 0;
          for(int i = 1 ; i<=1666;i++)
                 {
                     if(i%3!=0&&i%10!=3)
                     {
                         count++;
                         p[jj]=i;
                         jj++;
                     }
                 }
               cout<<p[a-1]<<endl;
    }
}
