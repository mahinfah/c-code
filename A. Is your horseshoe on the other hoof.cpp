#include<bits/stdc++.h>
using namespace std ;
int main(){
int n[4];
int count = 0;
for(int i  = 0;i <4 ; i++)
    {
        cin>>n[i];
    }

//if(n[0]==n[1]&&n[0]==n[2]&&n[0]==n[3]){
//    cout<<3;
//}

if(n[0]==n[1]){
    count++;
}
if(n[0]==n[2]){
    count++;
}
if(n[0]==n[3]){
    count++;
}
if(n[1]==n[2]){
    count++;
}
if(n[1]==n[3]){
    count++;
}
if(n[2]==n[3]){
    count++;
}
if(count==3){
    cout<<2;
}
else if(count>3){
    cout<<3;
}
else
    cout<<count;


}



