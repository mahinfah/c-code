#include<iostream>4 3

using namespace std;
int main()
{
    int a;
    int b;
    cin>>a;

    cin>>b;
    int sum=1;
    if(a>=b)
    {
        for(int i =1;i<=b;i++)
        {
            sum=sum*i;

        }
        cout<<sum;
    }
        if(a<b)
    {
        for(int i =1;i<=a;i++)
        {
            sum=sum*i;

        }     cout<<sum;
    }


}
