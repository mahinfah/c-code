#include<iostream>
#include<string>
using namespace std;
int main()
{

    int n;
    cin>>n;
    string a;
    int  t;
    cin>>t;
    cin>>a;
while(t!=0)
{


    for(int i =0 ;i<n;i++)
    {
        if(a[i]=='B')
        {
            if(a[i+1]=='G')
            {
                a[i]='G';
                a[i+1]='B';
                i++;
            }

        }


    }
    t--;

}
    cout<<a;

}
