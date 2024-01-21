#include<iostream>
using namespace std;
int main(){


int n;

int sum =0 ;
cin>> n;
 int f[4];
 int p[3];
for (int i =0;i<4;i++){
    cin>>f[i];}
    for (int i =0;i<3;i++){
    cin>>p[i];}


    for (int i =0;i<4;i++){
    if(f[i]>=n||p[i]>=n){
        cout<<"I become the guy."<<endl;

    }
    else
        cout<<"Oh, my keyboard!"<<endl;


}
}
