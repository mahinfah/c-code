#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n ;
  cin>>n;
  for(int ii =1 ;ii<=n;ii++)
 {
 string a;
 cin>>a;

 int count=0;
 int lol=0;
   int i=0;

   int x=0;
   int q=0;

     for(int k =0 ;k<a.length();k++)
     {
         if(a[k]=='0')
         {
             x++;
         }
         if(a[k]=='1')
         {
             q++;
         }

     }

        if(x==a.length())
   {
       cout<<0<<endl;
     //break;
   }

   if(x!=a.length())
   {


    while(lol!=1)
 {

     //cout<<i;

     if(a[i]=='1')
     {
         for(int j = i;j<a.length();j++)
         {
             if(a[j]=='0')
             {
                 count++;


             }

         }
                  lol=1;


     }
 else if(a[i]!='1')
 {
     i++;
 }

 }

 int countlast=0;
 int pp = a.length();

 int co=0;
 int iii=pp-1;
    while(co!=1)
 {
      int j =pp-1;
     if(a[iii]=='0')
     {

     while(a[j]!='1')
     {
         if(a[j]=='0')
         {
            countlast++;
           j--;
         }


     }
     }
     if(a[j]=='1')
     {
         co=1;
     }

 }


cout<<count-countlast<<endl;
//cout<<0;
 }
 }

}
