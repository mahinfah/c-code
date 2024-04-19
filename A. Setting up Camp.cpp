#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
    int m ;
     cin>>m;
    for(int i = 0 ; i<m ; i++ )


    {
      cin>>a;
      cin>>b;
      cin>>c;


    int sum =  b %3;
       int rum = b/3;
       int pum = b-(3*rum); // left ones
       int next = pum +c;
       int next2 = next%3;
      int q = (pum+c)/3;

       int next3 = next/3;
       int next4 = next-(next3*3);
       int next5= next4%2;
       int next6 = next4/2;
       int next7 = next4-(2*next6);
      // int next 8// ;
    int sum2 = c%3;
int rum2= c/3;



if(next/3>0){



      if(sum2==0&&sum==0)

      {

          cout<<a+rum+rum2<<endl;
      }
else if(sum!=0&&next2!=0&&next5==0)

{
//cout<<pum;
cout<<rum+a+ next3 +next6<<endl;

}
else if( sum!=0 && next2==0)

{
    cout<<a+rum+next3<<endl;
}
//else if( sum!=0 && next2!=0)

//{
   // cout<<a+rum+next3<<endl;
 //  cout<<-1;
//}
        else if(sum!=0&&next2!=0&&next5!=0)

{
//cout<<pum;
cout<<rum+a+ next3 +next6+next7<<endl;

}
}
else{ cout<<-1<<endl;}
//else
//{
   // cout<<-1<<endl;
//}

    }
}





