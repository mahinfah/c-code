/*Consider an algorithm that takes as input a positive integer
�
n. If
�
n is even, the algorithm divides it by two, and if
�
n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until
�
n is one. For example, the sequence for
�
=
3
n=3 is as follows:
3
→
10
→
5
→
16
→
8
→
4
→
2
→
1
3→10→5→16→8→4→2→1
Your task is to simulate the execution of the algorithm for a given value of
�
n.

Input
The only input line contains an integer
�
n.

Output
Print a line that contains all values of
�
n during the algorithm.

Constraints
1
≤
�
≤
1
0
6
1≤n≤10
6

Example
Inputcopy	Outputcopy
3
3 10 5 16 8 4 2 1*/
#include<iostream>
using namespace std;
int main()
{

    int n ;
    cin>>n;
    int sum=n;
    cout<<n<<" ";

for(int sum =n; sum!=1;){
    if(sum%2!=0){
        sum= sum*3+1;
        cout<<sum<<" ";
    }
    if(sum%2==0){
        sum = sum/2;
        cout<<sum<<" ";
    }

}

}

