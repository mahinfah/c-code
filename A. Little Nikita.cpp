#include<iostream>
using namespace std;
int main()
{


int n;
cin>>n;

  int a;
    int b;
for(int i = 1 ; i<=n;i++){

    cin>>a;
    cin>>b;
    if(a==b)
    {
        cout<<"YES"<<endl;
    }
     if(a<b)
    {
        cout<<"NO"<<endl;

    }
     if(a>b)
    {
        int sum = a-b;
        if
            (sum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
}
