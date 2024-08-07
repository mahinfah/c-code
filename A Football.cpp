#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i = 0 ;i<n;i++)
{
    cin>>a[i];

}
int count1=0;
int count=1;
int sum=0;
string c= a[0];
string lol;
     for(int i = 1 ;i<n;i++)
{
    if(c==a[i])
    {
        count++;
    }
    else if(c!=a[i])
    {     lol=a[i];
        count1++;
    }

}
//cout<<a[0]<<count<<"   "<<count1;
if(count1==0&&count==0)
{
    cout<<a[0]<<endl;
}

else if(count>count1)
{
    cout<<a[0]<<endl;
}

else if(count1>count)
{
    cout<<lol<<endl;
}


}
