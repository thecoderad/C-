#include <bits/stdc++.h>
using namespace std;

int main() {
    // int count = 1;
    // while (count <= 10) {
    //     count = count + 1;
    //     cout << "Hello World!" << endl;
    // }
    // int count = 1, sum = 0;
    // while (count <= 10) {
    //     sum += count;
    //     count = count + 1;
    // }
    // cout << "The sum of numbers from 1 to 10 = " <<  sum << endl;
    int count = 1, sum = 0, val;
    cout << "Enter the number till which the sum you want: " << endl;
    cin >> val;
    while (count <= val) {
        sum += count;
        count = count + 1;
    }
    cout << "The sum of numbers from 1 to " << val << " = " << sum << endl;

}