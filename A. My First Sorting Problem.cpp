#include<iostream>
using namespace std;
int main()
{

int n ;
cin>>n;
for(int i = 1 ; i<=n;i++)
{
    int a,b;
    cin>>a;
    cin>>b;
    if(a<b)
    {
        cout<<a<<" ";
        cout<<b;

    }
    else
    {
        cout<<b<<" ";
        cout<<a;
    }
    cout<<endl;
}

}
