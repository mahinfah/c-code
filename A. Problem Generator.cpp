#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    char a[7]= {'A','B','C','D','E','F','G'};
int suma = 0;
int n;
cin>>n;
    for(int i = 1 ;i<=n;i++)
    {
        int sum= 0;

        int m,A=0,B=0,C=0,D=0,E=0,F=0,G=0;
     string aa;
int nn;
     cin>>nn;
     cin>>m;
     cin>>aa;
     for(int i = 0 ; i<aa.length();i++)
     {
     if(aa[i]=='A')
     {
         A++;
     }
if(aa[i]=='B')
     {
         B++;
     }
     if(aa[i]=='C')
     {
         C++;
     }
     if(aa[i]=='D')
     {
         D++;
     }
     if(aa[i]=='E')
     {
         E++;
     }
     if(aa[i]=='F')
     {
         F++;
     }
     if(aa[i]=='G')
     {
         G++;
     }

     }
     if(A<m)
     {
     sum =sum+  (m-A);
     }
      if(B<m)
     {
     sum =sum+  (m-B);
     }
      if(C<m)
     {
     sum =sum+  (m-C);
     }
      if(D<m)
     {
     sum =sum+  (m-D);
     }
      if(E<m)
     {
     sum =sum+  (m-E);
     }
      if(F<m)
     {
     sum =sum+  (m-F);
     }
      if(G<m)
     {
     sum =sum+  (m-G);
     }
     cout<<sum<<endl;


    }



}
