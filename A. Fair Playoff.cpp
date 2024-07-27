
#include<iostream>
using namespace std;
int main()
{

    int a;
    cin>>a;

    for(int i = 1 ;i<=a;i++)
      {
          int m[4];

            for(int i = 0 ;i<4;i++)
             {
                cin>>m[i];
             }

int max1=0;
int check;
         for(int i = 0 ;i<4;i++)
            {
               if(m[i]>=max1)
               {
                   max1=m[i];
                   check = i;
               }

            }

         //       cout<<max1<<endl;
       //   cout<<check<<endl;


            int check2;
            int max2=0;
              for(int i = 0 ;i<4;i++)
            {
               if(i!=check &&m[i]>=max2)
               {
                   max2=m[i];
                   check2 = i;
               }

            }
      //      cout<<max2<<endl;
       //   cout<<check2;


     //  int lol = (check+1);

      // int lol2 = (check-1);
//
      if(check==0&&check2==1)
      {
          cout<<"NO"<<endl;
      }

      else if(check==3&&check2==2)
      {
          cout<<"NO"<<endl;
      }

      else if(check==1&&check2==0)
      {
          cout<<"NO"<<endl;
      }

      else  if(check==2&&check2==3)
      {
          cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
      }

}
