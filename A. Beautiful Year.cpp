#include<bits/stdc++.h>
using namespace std;
int main()
{int aaa;
cin>>aaa;

int aa=aaa+1;
   bool check = true;
   while (check)
   {




int a  = aa/1000  ;
int b= aa/100%10;
int c = aa/10%10;
int d= aa%10;
//cout<<a;
///cout<<b;
///cout<<c;
///cout<<d;







       if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
       {
           check = false;
           cout<<aa;

       }
       else{
        aa=aa+1;
       }

   }


}
