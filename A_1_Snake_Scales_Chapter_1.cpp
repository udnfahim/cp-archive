#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int j = 0; j < n; j++)
            cin >> a[j];
        
        int maxDiff = 0;
        for (int i = 0; i < n - 1; i++)
            maxDiff = max(maxDiff, abs(a[i + 1] - a[i]));
        
        cout << "Case #" << i << ": " << maxDiff << endl;
    }
    return 0;
}
