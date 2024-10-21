//https://codeforces.com/problemset/problem/1426/A
#include<iostream>
using namespace std;
int main()
{

    int a ;
    cin>>a;

    for(int i=1;i<=a;i++)
    {

        int m,n;

        cin>>m;
        cin>>n;

        int sum=2;

        int count=1;
        while(sum!=m&&sum<m)
        {

            sum=sum+n;
            count++;
        }
        cout<<count<<endl;



    }




}
