#include<iostream>
using namespace std;
int main()
{

    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
int low;

 if(a<b&&a<c&&a<d){
    cout<<"lowest is "<<a<<endl;
low = a;
 }
    else if (b<a&&b<c&&b<d){
        cout<<"lowest is " << b<<endl;
    low = b;
    }
else if(c<a&&c<b&&c<d){
    cout <<"lowest is  "<<c<<endl;
    low = c;
}
else {
    cout<<"lowest is "<<d<<endl;
low = d;
}


int suma=low-a;
int sumb=low-b;
int sumc=low-c;
int sumd=low-d;
//cout<<suma;
if(suma==0){
    if(b<c&&b<d){
        cout<<b<<"   2nd lowest";
    }
    else if(c<b&&c<d){
       cout<<c<<"    2nd lowest";
    }
    else if (d<c&&d<b){
        cout<<d<<"    2nd lowest";
    }
}
if(sumb==0){
    if(a<c&&a<d){
        cout<<a<<"   2nd lowest";
    }
    else if(c<a&&c<d){
       cout<<c<<"    2nd lowest";
    }
    else if (d<c&&d<a){
        cout<<d<<"    2nd lowest";
    }
}
if(sumc==0){
    if(b<a&&b<d){
        cout<<b<<"   2nd lowest";
    }
    else if(a<b&&a<d){
       cout<<a<<"    2nd lowest";
    }
    else if (d<a&&d<b){
        cout<<d<<"    2nd lowest";
    }
}
if(sumd==0){
    if(b<c&&b<a){
        cout<<b<<"   2nd lowest";
    }
    else if(c<b&&c<a){
       cout<<c<<"    2nd lowest";
    }
    else if (a<c&&a<b){
        cout<<a<<"    2nd lowest";
    }
}

}





