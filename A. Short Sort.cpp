
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {

    int check=0;
 int count=0;
    string a;
    cin>>a;


if(a[0]=='a'&&a[1]=='b'&&a[2]=='c')
{
    count=0;
}
else if(a[0]=='b'&&a[1]=='c'&&a[2]=='a')
{
    count++;
}
else if(a[0]=='c'&&a[1]=='a'&&a[2]=='b')
{
    count++;
}
else
{
    count=0;
}



    if(count==0)
    {
       cout<<"YES\n";
    }
    if(count>0)
    {
        cout<<"NO"<<endl;
    }


}
}
