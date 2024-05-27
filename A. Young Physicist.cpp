#include <iostream>
using namespace std;
 
int main() 
{
   //
  //  cout << "Try programiz.pro";
int n; 
cin>> n;
int m = n*3;
int a [m];
int sum1= 0;
int sum2= 0;
int sum3= 0;
 
 
for(int i = 0 ; i < m ; i++ )
  {
    
      sum1 = sum1 +a[i*n];
      
  }
  cout<<sum1<<endl;
for(int i = 0 ; i < m ; i++ )
  {
    int p = i*n;
      sum2 = sum2 +a[p+1];
      
  }
  cout<<sum2<<endl;
 
 for(int i = 0 ; i < m ; i++ )
  {
    int q = i*n;
      sum3 = sum3 +a[q+2];
      
  }
  cout<<sum3<<endl;
  if(sum1==0||sum2==0||sum3==0)
  {
      cout<<"YES"<<endl;
  }
 
 else
 {
     cout<<"NO"<<endl;
 }
    return 0;
}
