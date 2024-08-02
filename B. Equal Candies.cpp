#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        int a[m];

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
        int sum = a[0] ;


    for(int i=0;i<m;i++)
    {
        if(sum>=a[i])
        {
            sum = a[i];
        }

    }
      //  cout<<sum;

int sum1=0;

    for(int i=0;i<m;i++)
    {
        if(a[i]!=sum)
        {
            sum1 = sum1 + (a[i]-sum);
        }

    }

cout<<sum1<<endl;

    }

}
