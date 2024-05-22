#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>n;
    cin>>m;
    int sum = n;
    int sum2 = m;
    int count=0   ;
    while(sum<=sum2)
    {
        sum=sum*3;
        sum2=sum2*2;
        count++;

    }
 cout<<count;
}
