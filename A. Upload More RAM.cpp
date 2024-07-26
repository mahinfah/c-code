//#include<iostream>
using namespace std;
int main()
{

    int a;
    cin>>a;
    for(int i = 0 ;i<a;i++)
    {
        int n;
        int k;

        cin>>n;
        cin>>k;
        int sum=0;
        if(k==1)
        {
         cout<<k*n<<endl;
        }
        if(k!=1)
        {
            int p=n-1;
            sum = 1+(k*p);
            cout<<sum<<endl;
        }

    }


}
