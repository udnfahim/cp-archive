#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        int temp = x;
        int count = 0;
        if (temp == 0) count = 1;
        else {
            while (temp > 0) {
                count++;
                temp /= 10;
            }
        }
        int digits[count];
        for (int i = 0; i < count; i++) {
            digits[i] = (x / (int)pow(10, i)) % 10;
        }
        int minimum = digits[0];
        for (int i = 1; i < count; i++) {
            if (digits[i] < minimum) {
                minimum = digits[i];
            }
        }
        cout << minimum << endl;
    }
    return 0;
}
