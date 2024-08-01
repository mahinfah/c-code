#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        int m;
        cin>>m;
        string a;
        cin>>a;
int sum=0;

        for(int i = 0 ;i<m;i++)
        {
int c=0;
            for(int j=0;j<i;j++)
            {
                if(a[i]==a[j])
                {// cout<<c;
                   c++;
                   break;
                   //cout<<c;
                }


            }

            if(c>=1){
                sum=sum+1;
              //  cout<<"sum1:"<<sum;
              //  c=0;


            }
            if(c==0)
            {
                sum=sum+2;


            }

        }

cout<<sum<<endl;

    }
}
