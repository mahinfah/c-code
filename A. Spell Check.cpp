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
        int p;
    cin>>p;

        string m;
        cin>>m;

        int count1 = 0;
         int count2 = 0; int count3 = 0; int count4 = 0; int count5 = 0;

        for(int i = 0 ;i<p;i++)
        {
            if(m[i]=='T')
            {
                count1++;
            }

            else if(m[i]=='r')
            {
                  count2++;
            }
            else if(m[i]=='m')
            {
                  count3++;
            }
            else if(m[i]=='u')
            {
                  count4++;
            }

            else if(m[i]=='i')
            {
                  count5++;
            }

        }
              if(p!=5)
              {

                  cout<<"NO"<<endl;
              }
               else if(count1==1&&p==5&&count2==1&&count3==1&&count4==1&&count5==1)
              {
             cout<<"YES"<<endl;
               }
          else
          {
              cout<<"NO"<<endl;
          }
    }


}
