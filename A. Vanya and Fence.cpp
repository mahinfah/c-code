#include<iostream>
using namespace std;
int main()
{

    int people , h ;
    cin>>people;
    cin>>h;

    int a[people];
    for(int i = 0 ;i<people;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i = 0 ;i<people;i++)
    {
        if(a[i]>h)
        {
            count=count+2;
        }
        else
        {
            count++;
        }
    }
    cout<<count;

}
