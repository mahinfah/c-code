#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int r, c;

    cin >> r;

    cin >> c;


    string array[r][c];


    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            cin >> array[i][j];
        }
    }
int count=0;
    for(int i = 0; i < r; i++)
    {  int n=0;
        for(int j = 0; j < c; j++)
        {
            if(array[i][j]=="C"||array[i][j]=="Y"||array[i][j]=="M")
            { count++;
                cout<<"#Color";
              n++;

                break;



            }
        }
        if(n>0)
        {
            break;
        }

    }
     if(count==0)
     {
         cout<<"#Black&White";
     }



}
