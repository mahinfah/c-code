#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int sum= 0;
int p[n];
int count =0;
for(int i = 0 ; i<n;i++){//
    for(int j = 0;j<2;j++){
        cin>>p[j];

    }
     for(int j = 0;j<1;j++){
            if (p[j+1]-p[j]>=2){
            count++;
        }

    }

 //sum = sum +count;
}
cout<<count;
}
