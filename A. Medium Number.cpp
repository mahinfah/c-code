#include<iostream>
using namespace std;
int main()
{



    int n;
    cin>>n;
    for(int i = 1 ; i<=n ; i++)
    {
        int a ,b,c;
        cin>>a;
          cin>>b;
          cin>>c;
          if(a>b&&c>a)
          {
              cout<<a<<endl;
          }
          if(a<b&&c<a)
          {
              cout<<a<<endl;
          }
          if(b>a&&b<c)
          {
              cout<<b<<endl;
          }
          if(b<a&&b>c)
          {
              cout<<b<<endl;
          }
          if(c>a&&c<b)
          {
              cout<<c<<endl;
          }
          if(c<a&&c>b)
          {
              cout<<c<<endl;
          }



    }

}
