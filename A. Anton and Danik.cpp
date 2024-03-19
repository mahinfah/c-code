#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
string a ;

cin>>n;
cin>>a;
int count = 0 ;
int countt = 0;
for(int i = 0 ; i<n;i++){
    if(a[i]=='A'){
        count++;
    }
    else if(a[i]=='D'){
        countt++;
    }
}
if(count<countt){
    cout<<"Danik";
}
if(count>countt){
    cout<<"Anton";
}
if(count==countt){

    cout<<"Friendship";
}
}
