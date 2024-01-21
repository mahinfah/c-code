#include<iostream>
#include<iomanip>
using namespace std;
int main(){


int n;

double sum =0 ;
cin>> n;
double f[n];
for (int i =1;i<=n;i++){
    cin>>f[i];
}
for(int i =1;i<=n;i++){
    sum = sum +f[i];

}
cout<<setprecision(12)<<sum/n;





}
