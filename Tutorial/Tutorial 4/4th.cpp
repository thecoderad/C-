#include <bits/stdc++.h>
using namespace std;

int main(){
    /* Here we have an while statement which adi you have learnt so no time waste to see you requesting to telll you again!!! */
    // int count = 1;
    // while (count <= 10) {
    //     count = count + 1;
    //     cout << "Hello World!" << endl;
    //     cout << count << endl; // This part is addition added by Adi
    // }
    // int count = 1, sum = 0;
    // while (count <= 10) {
    //     sum += count; // same as sum = sum + count
    //     count = count + 1;
    // }
    int count = 1, sum = 0, val;
    cout << "Enter the number till which the sum has to be calculated:" << endl;
    cin >> val;
    while (count <= val) {
        sum += count;
        count = count + 1;
    }
    cout << "The sum of 1 to " << val << " = " << sum << endl;
    return 0;
}
