
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
   cin>> str;
    string a = str;
    string b;
cin>>b;
    // Reverse str[begin..end]
    reverse(str.begin(), str.end());

   // cout << str<<endl;
  // cout << a;
if(b==str){
    cout<<"YES";
}
else
    cout<<"NO";
    return 0;
}



