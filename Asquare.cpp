#include<iostream>
using namespace std;
 int main(){
int m;
 cin >> m;
 int a [8*m];
 int sum = 0;
int  area ;
 for(int j =  0 ; j< 8*m;j++){

    cin >> a[j];}


 for(int j = 0 ; j< m;j++){

if (a[j*8] ==a[2+j*8]){
sum = a[1+j*8]-a[3+j*8];
   area = sum*sum ;

   cout<<area<<endl;

 }
  else if(a[j*8]!=a[2+j*8]){

    sum = a[j*8]-a[2+j*8];
    area = sum *sum ;
    cout<< area<<endl;


    }


 }


 }



