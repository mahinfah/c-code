
#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int n;


    cin>>n;
    //int a[n];

    for(int i =1 ;i<=n;i++)
    {
      //  int p;
    //    cin>>p;

        string m;
        cin>>m;

        int count = 0;


 //       int count=0 0  1  2  3  4  5
        int l = m.length()/2;
        for(int i = 0 ;i<l;i++)
        {
            if(m[i]==m[i+l])
            {
                count++;
            }

        }
       // cout<<count;
        if(m.length()%2!=0)
        {
            cout<<"NO"<<endl;
        }
       else if(count==l&&m.length()%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

}
