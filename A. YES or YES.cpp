#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string a;
int n;
cin>>n;
for(int i = 1;i<=n;i++)
{
    cin>>a;
    if(a=="YES"||a=="yes"||a=="Yes"||a=="yEs"||a=="yeS"||a=="yES"||a=="YEs"||a=="YeS"||a=="yES")
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

}
