#include<iostream>
#include<string>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
    {    int p=0;
        string a;
        cin>>a;
        int m =a.length();
        if(m==1&&a!="a")
        {
            cout<<a<<"a"<<endl;
        }
        else if(m==1&&a!="b")
        {
            cout<<a<<"b"<<endl;
        }
        else if(m!=1)
        {
            for(int j =0 ; j<m;j++)
            {


                if(a[j]==a[j+1]&& a[j]!='a'&&p==0)
                {
                    p++;
                    int i=0;
                    if(i==0)
                    {
                      cout<<a[j]<<"a";
                      i++;

                    }

                }
                else if(a[j]==a[j+1]&& a[j]!='b'&&p==0)
                {
                       p++;
                    int i=0;
                    if(i==0)
                    {
                      cout<<a[j]<<"b";
                      i++;

                    }
                }


                else
                {
                    cout<<a[j];
                }


            }

                if(p==0&&a[m-1]!='a')
                {
                    cout<<"a";
                }
                else if(p==0&&a[m-1]!='b')
                {
                    cout<<"b";
                }
            cout<<endl;
        }

    }

}
