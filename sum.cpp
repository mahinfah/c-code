#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i = 0 ;i<n;i++)
    {

        int a,b,c,sum1,sum2,sum3;
        cin>>a;
        cin>>b;
        cin>>c;
        sum1=a+b;
        sum2=b+c;
        sum3=c+a;

        if(sum1==c)
        {
            cout<<"YES"<<endl;
        }
        else if(sum2==a)
        {
            cout<<"YES"<<endl;
        }
        else if(sum3==b)
        {
            cout<<"YES"<<endl;
        }
            else




            {
                cout<<"NO"<<endl;
            }
    }
}
