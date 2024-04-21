#include <iostream>
#include<string>
using namespace std;
int main() {
 string a ;
 cin>>a;
 for(int i = 0 ;i<a.length();i++)
 {
if(a[i]=='W')
{
    if(a[i+1]=='U')
    {
        if((a[i+2])=='B')
        {
            cout<<" ";
            i = i+2;
        }
        else
        {
            cout<<a[i];
        }
    }
    else 
    {
        cout<<a[i];
    }
    
}
else 
{
    cout<<a[i];
}
 }
   }
