#include <iostream>

using namespace std;

int main()
{
    int b;
    cin>>b;

    for(int i = 0 ; i<b ; i++){
        int m ,n;
        cin>>m;
        cin>>n;
int count = 0;


            if(m%n!=0){

count = n-m%n;

 cout<<count<<endl;

            }

        else
            cout<<0<<endl;


}
}
