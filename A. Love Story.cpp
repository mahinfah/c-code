
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {


 int count=0;
    string a;
    cin>>a;
    string b ="codeforces";

for(int i = 0 ;i<a.length();i++)
    {
        if(a[i]!=b[i])
        {
            count++;
        }
    }
    cout<<count<<endl;

}


}
