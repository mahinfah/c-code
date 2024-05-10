// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;
int main()
     {
       
     char a ;
     int n ;
      cin>> n;
      for(int i = 1 ; i<=n ; i++ )
       {
           
           cin >>a;
           if(a=='c'||a=='o'||a=='d'||a=='e'||a=='f'||a=='o'||a=='r'||a=='c'||a=='e'||a=='s')
           {
               cout<<"YES"<<endl;
           }
           else 
           {
           cout<<"NO"<<endl;
           }
           
       }
    return 0;
       }
