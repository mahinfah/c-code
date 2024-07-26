#include<iostream>
#include<string.h>
using namespace std;
int main()
{
     int n ;
     cin>>n;
     for(int i = 1;i<=n;i++)
     {

int aa;
    string a,check;
    cin>>aa;
    cin>>a;
    check = a;
    for(int i = 0 ;i<check.length()-1;i++)
    {
        for(int j = 0 ;j<check.length()-i;j++)
        {
            if(check[i]>check[i+1])
            {
                char temp ;
                temp = check[i];
                check[i]=check[i+1];
                check[i+1]=temp;
                    //cout<<temp;

            }
        }

    }
if(a==check)
{
 cout<<"YES"<<endl;
}
if(check!=a)
{
 cout<<"NO"<<endl;
}

     }


}
