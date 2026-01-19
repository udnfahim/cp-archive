#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;

        if (a <= k && b <= k) {
            cout << 1 << '\n';
        } else if (a % k == 0 && b % k == 0) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}
