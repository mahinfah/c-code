#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string a;
        cin >> a;
        int sum = 0;
        int aa;
        aa = stoi(string(1, a[0])); // Convert the character to a string and then to an integer

        int bb=stoi(string(1, a[2])); // Correctly sum the characters

        sum = aa + bb;
        cout << sum << endl;
    }
    return 0;
}
