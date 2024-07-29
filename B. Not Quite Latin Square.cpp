#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){


    char aa[3][3];

  for(int i= 0 ;i<3;i++)
  {
      for(int j =0;j<3;j++)
      {
          cin>>aa[i][j];
      }
  }
int a=0;
int b =0;
int c=0;

  for(int i= 0 ;i<3;i++)
  {
      for(int j =0;j<3;j++)
      {
          if(aa[i][j]=='A')
          {
            a++;
          }
          else if(aa[i][j]=='B')
          {
              b++;
          }

          else if(aa[i][j]=='C')
          {
              c++;
          }
      }
     // cout<<endl;
  }//

if(a!=3)
{

    cout<<"A"<<endl;
}
else if(b!=3)
{
    cout<<"B"<<endl;
}
else
{
    cout<<"C"<<endl;
}

  }
}
