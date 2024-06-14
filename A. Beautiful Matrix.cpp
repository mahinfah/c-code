#include<iostream>
using namespace std;
int main()
{

    int a[5][5];
int sum = 0;
int sum2= 0;
    for(int i = 0 ;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];

                  }
    }

    for(int i = 0 ;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            //cout<<a[i][j]<<" ";
            if(a[i][j]=="#")
            {// cout<<i+1;
          //  cout<<j+1;
                sum =3-i-1;
                sum2=3-j-1;

            }

        }

    }
    if(sum<0)
    {
        sum = sum*-1;
    }
    if(sum2<0)
    {
        sum2 = sum2*-1;
    }
  ///  cout<<sum<<endl;
///  cout<<sum2<<endl;
   cout<<sum+sum2;
}
