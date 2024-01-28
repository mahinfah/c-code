#include<iostream>
using namespace std ;
int main()
{
    int n;

    cin>>n;
    int f[3*n];
for(int i = 0 ; i<3*n;i++){
    cin>>f[i];

}
int count = 0;
for(int i = 0 ; i<n;i++){
        int sum= 0;

        for(int j = 0; j<3;j++){
   // cout<<f[j+3*i];
sum = sum+f[j+3*i];
if(sum>=2){
    count++;
    break;

}
}

}
cout<<count;
}
