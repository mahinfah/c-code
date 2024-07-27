
#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    string a;
    cin>>a;

    for(int i =0 ;i<a.length();i++)
    {
        //cout<<a[i];

        if(a[i]=='-'&&a[i+1]=='-')
        {
            cout<<"2";
            i++;
        }
        else if(a[i]=='-'&&a[i+1]=='.')
        {
            cout<<"1";
            i++;
        }

        else if(a[i]=='.')
        {
            cout<<"0";
        }



    }

}
