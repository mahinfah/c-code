#include <iostream>
using namespace std;

int main()
{
  string a ;
  cin>>a;
  int count = 0 ;
  //4cout<<a.length();
  for(int i = 0 ;i<a.length();i++)
  {
      if(a[i]=='4'||a[i]=='7')
      {
          count++;
          //cout<<count;
      }


  }
if(a!="7"){
 if(count==4||count==7)
 {

     cout<<"YES";

 }
 else{
    cout<<"NO";
 }

}
else cout<<"NO";
}
