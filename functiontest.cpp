#include<iostream>
using namespace std;
int isprime(int num);

 int main()

 { int num;
 cout << "Enter your Number: ";
  cin >> num;
   if (isprime(num) == 0)
        cout << num << " is a Prime Number";

   else cout << num << " is Not a Prime Number";
    return 0;
     }



      int isprime(int num)
       { int count = 0;

        for (int i = 2; i <= num / 2; i++)


            { if (num % i == 0)
            { count++;
             break; }
        }
        return count; }
