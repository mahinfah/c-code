#include<iostream>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    if(a%2==0)
    {
        cout<<a/2;
    }
    else
        cout<<((a/2)+1)*-1;
}
