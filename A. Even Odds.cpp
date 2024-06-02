#include<iostream>
using namespace std;
int main()
{
   long long int a  ,b;

cin>>a;//
cin>>b;

int c=0;
int m = 0;
int sum=1;
if(a%2==0)
{
   sum=a/2;
   m=sum;
}
else
{

sum = (a/2)+1;
m = sum;
}

for(int i =1 ; i<=a;i++)
{
    if(i%2!=0)
    {
    c++;

   // p[i-1]=i;
    if(b==c)
    {
        cout<<i;
    }
    }
if(i%2==0)
{
    m=m+1;
  //  p[i-1]=i;
    if(b==m)
    {
        cout<<i;
    }
}
}

//cout<<sum;
//for(int i =0 ; i<a;i++)

//{
  //  if(b<c)
  //{
  //  cout<<p[b];
 // }
//}
}
