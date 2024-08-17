#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int m[a];
    for(int i =0;i<a;i++)
    {
        cin>>m[i];
    }
    int check=1;
    while(check<=a)
    {


    for(int i =0;i<a;i++)
    {
        if(check == m[i])
        {
            cout<<i+1<<" ";
            check++;
        }
    }

    }

}
