#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    string s ;

    cin >> s;

    for (int x=0; x<s.length(); x++){

            putchar(toupper(s[x]));
            break;

 }

 for (int x=1; x<s.length(); x++){

    cout<<s[x];
 }}
