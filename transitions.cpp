#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int p = -1;
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(s[i] - s[i+1]) == 1) {
            p = i + 2;
        }
    }
    cout << p << endl;
    return 0;
}
