#include<iostream>
using namespace std;
int main()
{
    int k , n , w ;
    cin>>k;

    cin>>n;
    cin>>w;
    int sum = 0;
    for(int i=1 ; i <=w ; i++)
    {
        sum = sum + (i*k);
    }
    int rum= 0;
rum= sum - n;
if(rum>0)
{
 cout<<rum;
}
else
{
 cout<<0;
}

}
