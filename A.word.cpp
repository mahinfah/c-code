
// Program to check if a character is in
// lowercase using islower()
//checking by using islower() for lowercase
// checking by using isupper() for uppercase
#include <iostream>
#include <cctype>
#include<string.h>

using namespace std;
int main()
{
	string x;
	cin >> x;
	int count_upper = 0;
	int count_lower = 0;
	for(int i = 0 ; i<x.length();i++)
    {


	if (isupper(x[i]))
        {
	//	cout << "Lowercase";

		count_upper++;
		}
	 else
		{
		    count_lower++;
		}
    }




 if(count_lower>=count_upper)
 {
    for(int i = 0 ; i<x.length();i++)
    {
         putchar(tolower(x[i]));
       // cout<<toupper(h[i]);
    }

 }
 else
    {
    for(int i = 0 ; i<x.length();i++)
    {
         putchar(toupper(x[i]));
       // cout<<toupper(h[i]);
    }
   }
}
