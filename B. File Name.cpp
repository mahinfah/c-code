//https://codeforces.com/contest/978/problem/B
#include<iostream>
#include<string>
using namespace std;
int main()
{
 
 
      int len;
      cin>>len;
      string a;
      cin>>a;
 
   int count=0;
   for(int i=0;i<len;i++)
   {
       if(a[i]=='x')
       {
           i++;
           if(a[i]=='x')
           {
               i++;
               //cout<<"sa";
               if(a[i]=='x')
            {
                while(a[i]=='x')
                {
                    //cout<<"Sa"<<endl;
                    count++;
                        i++;
                }
 
            }
 
           }
       }
   }
   cout<<count<<endl;

}
