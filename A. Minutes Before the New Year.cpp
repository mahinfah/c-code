#include<iostream>
using namespace std;
int main()
{

    int a;
    cin>>a;

    for(int i = 1 ;i<=a;i++)
      {
        int h,m;
        cin>>h;
        cin>>m;
        int sum = 0;
        int sui = 0;

        sum = 23-h;
        sui = (sum*60)+(60-m);
        cout<<sui<<endl;

      }


}
