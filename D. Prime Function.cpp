#include<iostream>
#include<cmath>
using namespace std;
int prime ( int m ){
     int count = 0;

for (int i = 1 ;i<=sqrt(m);i++){
   if  (m%i==0&&m!=1){
        count++;

        }

}

    if(count==1){
        cout<<"YES"<<endl;
        }
else
    cout<<"NO"<<endl;


}
int main(){

    int k;

    cin>>k;
int m;
  for(int j=1 ; j<=k;j++){
        cin>>m;

    prime(m);
}
  }

