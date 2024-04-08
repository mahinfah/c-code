#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a,b,c;

    for(int i = 1 ; i<=n;i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
    if(a-b==c)
    {
        cout<<"-"<<endl;
    }
    else if(a+b==c)
    {
        cout<<"+"<<endl;
    }
    }


}
