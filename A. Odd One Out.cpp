
#include<iostream>
using namespace std;
int main(){

//vvvv
int n ;
cin>>n;
int a[n*3];
for(int i = 0 ; i<n*3 ; i++){

        cin>>a[i];

    }


    for(int i = 0 ; i<n ; i++){

if(a[0+i*3]==a[1+i*3]){
    cout<<a[2+i*3]<<endl;


}
else if (a[2+i*3]==a[1+i*3]){
    cout<<a[0+i*3]<<endl;;
  //  break;
}
else if (a[0+i*3]==a[2+i*3]){
    cout<<a[1+i*3]<<endl;}
//break;
}

    }










