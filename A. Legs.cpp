#include<iostream>
using namespace std;
int main()
{
    int aa;
    cin>>aa;
    int m[aa];
    int sum =1;
    for(int i = 0 ;i<aa;i++)
    {

        cin>>m[i];

    }

    for(int i = 0 ;i<aa;i++)
    {

        int cow = 1;
        cow = m[i]/4;
        if(m[i]%4==0)
        {
            cout<<cow<<endl;
        }
        else
            cout<<cow+1<<endl;
    }

}
