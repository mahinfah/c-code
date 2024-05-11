#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a<c)
    {

        int sum = 0;
        sum = (a-b)+(c-a);
        cout<<sum;
    }
    else if(c>a&&c<b)
    {
        int sum = 0;
        sum = (b-c)+(c-a);
        cout<<sum;
    }
    else if(a>c&&a<b)
    {
        int sum = 0;
        sum = (a-c)+(b-a);
        cout<<sum;
    }
    else if(c>b&&c<a)
    {
        int sum = 0;
        sum = (c-b)+(a-c);
        cout<<sum;
    }
    else if(b>a&&b<c)
    {
        int sum = 0;
        sum = (b-a)+(c-b);
        cout<<sum;
    }
    else if(b>c&&b<a)
    {
        int sum = 0;
        sum = (b-c)+(a-b);
        cout<<sum;
    }

}
