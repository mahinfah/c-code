#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    for(int i =1 ;i<=n;i++)
    {
     int sum=1;
        int a;
        cin>>a;
        int count=0;
        if(a==1)
        {
            cout<<"2"<<endl;
            count++;
        }
    if(a==2)
        {
            cout<<"1"<<endl;
        count++;
        }
         if(a==4)
        {
            cout<<"2"<<endl;
        count++;
        }
      if(count==0)
        {
            if(a%3==0)
            {
                cout<<a/3<<endl;
            }
            int lol ;
            lol = a/3;
            int lol2 = a-lol*3;
           // cout<<lol2;
            if(lol2==2)
            {
                cout<<lol+1<<endl;
            }
            if(lol2==1)
            {
                cout<<lol+1<<endl;
            }

        }
}
}
