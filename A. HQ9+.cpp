#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int count=0;
    for(int i = 0 ; i< a.length();i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9'||a[i]=='+')
            {
                cout<<"YES";
                count++;
                break;
            }


    }
    if(count==0)
    {
        cout<<"NO";
    }

}
