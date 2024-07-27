#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int lol= n*2;
    int a[n*2];

    int count=0;
int count1=0;
int tie=0;
    //0 2 4
    for(int i =0 ;i<lol;i++)
    {
            cin>>a[i];


    }
        //checking
         for(int i =0 ;i<lol;i=i+2)
    {
            if(a[i]>a[i+1])
            {
                count++;
            }
            if(a[i]<a[i+1])
            {
                count1++;
            }
            if(a[i]==a[i+1])
            {
                tie++;
            }


    }
    cout<<tie;

      if(tie==n)
      {
        cout<<"Friendship is magic!^^"<<endl;
      }

      if(count>count1)
      {
        cout<<"Mishka"<<endl;
      }

      if(count<count1)
      {
        cout<<"Chris"<<endl;
      }


}
