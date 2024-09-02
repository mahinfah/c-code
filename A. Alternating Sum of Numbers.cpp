#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i =1 ;i<=n;i++)
    {
        int m;
        cin>>m;
        int a[m];
        int sum=0;
        for(int i =0;i<m;i++)
        {
            cin>>a[i];
            if(i%2!=0)
            {
                sum =sum-a[i];
            }
            else{
                sum=sum+a[i];
            }
        }
        cout<<sum<<endl;

    }

}
