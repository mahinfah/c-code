#include<iostream>
using namespace std;
int main()
{ int n ;
cin>>n;

for(int i = 1 ; i<=n;i++)
{


    float a, b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int rum = a/2;//2 ,3
    int rumrum=2*rum; //4 ,6
    int rumrumrum=a-rumrum;//1
    int rum21= rum*c+b*rumrumrum;
    int rum22=a*b;
//    if(a%2==0){
  //  float rum23=a*promo;
    //}
    float promo=c/2;
    float sum=a*b;
    float sum2=promo*a;

    if(a==2)
              {
    if(sum>sum2)
    {
        cout<<sum2<<endl;
    }
    else
        cout<<sum<<endl;
                 }

     if(a!=2)
     {
         if(rum22>rum21)
         {
             cout<<rum21<<endl;
         }
         else
            {
            cout<<rum22<<endl;
            }
     }
}
}



