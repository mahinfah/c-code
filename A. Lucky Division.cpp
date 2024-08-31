#include<iostream>
#include<string>
using namespace std;
int main()
{


    string a;
    cin>>a;
    int n=0;

    int my = stoi(a);
    if (my%4==0||my%7==0||my%47==0)
    {
        cout<<"YES";
    }
    else
    {


    for(int i =0;i<a.length();i++)
    {
            if(a[i]=='4')
            {      n++;

             }

            else if(a[i]=='7')
            {      n++;

            }

            else
            {
                cout<<"NO"<<endl;
                break;
            }
    }
    if(n==a.length())
    {
        cout<<"YES"<<endl;
    }
}


}
