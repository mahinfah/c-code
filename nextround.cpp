#include<iostream>
using namespace std;
int main(){

int n ;
cin>> n;
int num[n];
int a ;
cin>> a;
for(int i = 0 ; i<n;i++){
    cin>> num[i];
}

int count = 0 ;
for(int i = 0 ; i<n;i++){
   if(num[i]>=num[a-1]&&num[i]>0){
//cout<<count;
    count++;

   }
//else if(num[a]==0){



  //  break;
   // cout<<0;
}




if(count>0){
    cout<<count;
}

else
    cout<<0;
}
