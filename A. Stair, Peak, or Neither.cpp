#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int m ;
     cin>>m;
    for(int i = 0 ; i<m ; i++ )


    {
    cin>>a;
    cin>>b;
    cin>>c;
    if(a<b&b<c)
    {
    cout<<"STAIR"<< endl;
    }
    else if(a<b&b>c)

    {
        cout<<"PEAK"<<endl;
    }
    else
    {
        cout<<"NONE"<<endl;
    }
    }


}
