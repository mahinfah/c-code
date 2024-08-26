#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int m = n*2;
     int a[m];
     int count=0;
     int count1=0;
     int loss=0;
     int loss2=0;

    for(int i=0;i<m;i++)
    {
      cin>>a[i];
    }

      for(int i =0;i<m;i=i+2)
       {
       if(a[i]>a[i+1])
       {
           count++;
       }
      else if(a[i]<a[i+1])
       {

           count1++;
       }


       }


  if(count>=1&&count1>=1)
  {
      cout<<"Happy Alex"<<endl;
  }

  else{
    cout<<"Poor Alex"<<endl;
  }
}
