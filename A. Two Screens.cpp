                                                      // https://codeforces.com/problemset/problem/2025/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
   int n;
   cin>>n;

   for(int i =1;i<=n;i++)
   {
       string a;
       cin>>a;
       string b;
       cin>>b;

       int count=0;
       for(int i =0;i<a.length();i++)
       {
           if(a[i]==b[i])
           {
               count++;
           }
           else
           {
            break;
            }
       }


   int sum=0;
   int blen=b.length();
         int alen=a.length();
                int lol=blen-count;
                int lol2=alen-count;
//cout<<count;
   if(count==0)
   {
       cout<<a.length()+b.length()<<endl;
   }
    else if(count>0&&count==alen)
   {

       cout<<count+1+lol<<endl;;
   }

    else if(count>0&&count!=alen)
   {

       cout<<count+1+lol+lol2<<endl;;
   }



   }

}
