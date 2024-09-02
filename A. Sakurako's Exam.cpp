#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i =1 ;i<=n;i++)
    {
 int c=0;
        int a,b;
        cin>>a;
        cin>>b;
        int sum=a*1;
        int sum2=1;
         sum2=b*2;
       int sum22 =sum2/2;
        int sum3=sum+sum2;
        int sum4=sum3/2;

        if(sum!=0&&sum2!=0)
        {

         if(sum3%2==0)
         {
             if(sum4%2==0)
             {
                 cout<<"YES"<<endl;
                 c++;
             }
             else if(sum%2==0&&sum2%2==0)
             {
                 cout<<"YES"<<endl;
               c++;
             }

         }
            else
             {
                 cout<<"NO"<<endl;
               c++;
             }

        }
        else if(a==0)
        {
            if(sum22%2==0)
            {
                cout<<"YES"<<endl;
                c++;
            }

            else
                 cout<<"NO"<<endl;
        }
        else if(b==0)
        {
            if(sum%2==0)
            {
                cout<<"YES"<<endl;
                c++;
            }
            else
                 cout<<"NO"<<endl;
        }


}

}













