#include<iostream>
using namespace std;
int main()
{

int n ;
cin>>n;
int a[100][100];
int sum1=0,sum2=0,sum3=0;
for(int i = 0 ;i <n ;i++)
{
  for(int j = 0 ; j<3;j++)
  {
      cin>>a[i][j];
      
  }
    sum1=sum1+a[i][0];
    sum2=sum2+a[i][1];
    sum3 =sum3+ a[i][2];

  }

    // cout<<endl;
    
//cout<<sum1<<endl;

  //cout<<sum2<<endl;
//
 // cout<<sum3<<endl;
  if(sum3==0&&sum2==0&&sum1==0)
  {
      cout<<"YES"<<endl;

  }
  else
  {
      cout<<"NO"<<endl;
  }
}
