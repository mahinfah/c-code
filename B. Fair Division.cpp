#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    //int a[n];

    for(int i =1 ;i<=n;i++)
    {
        int m;
        cin>>m;
        int a[m];
        for(int i = 0 ;i<m;i++)
        {
            cin>>a[i];
        }

        //checking
        int sum= 0;
        int count=0;
        int count2=0;
        for(int i = 0 ;i<m;i++)
        {
            if(a[i]==2)
            {
                sum=sum+a[i];
                count++;
            }

            else if(a[i]==1)
            {
                sum=sum+a[i];
                count2++;
            }
        }
    //    cout<<count2;


              if(sum%2==0&&count2!=m&&count!=m)
              {
                cout<<"YES"<<endl;
              }
              else if(count2==m&&sum%2==0)
              {
                  cout<<"YES"<<endl;
              }

              else if(count==m&&count%2==0)
              {
                  cout<<"YES"<<endl;
              }


              else
              {
                  cout<<"NO"<<endl;
              }


    }


}
