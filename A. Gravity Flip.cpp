#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ;i <n;i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    for(int i = 0 ;i<n;i++)
    {
        for(int j = 0 ;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp ;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
        }
    }
    cout<<endl;

    for(int i = 0 ;i <n;i++)
    {
        cout<<a[i]<<" ";
    }

}
