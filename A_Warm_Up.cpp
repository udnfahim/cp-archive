#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int number = 1; number <= t; number++) {

        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        bool allSame = true;
        bool hasNegative = false;
        bool actualProcess = false;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) allSame = false;
            if (a[i] > b[i]) hasNegative = true;
        }

        cout << "Case #" << number << ": ";

        if (allSame) {
            cout << 0 << endl;
        } 
        else if (hasNegative) {
            cout << -1 << endl;
        } 
        else {
            //Actual Process
            vector<pair<int,int>> ops;

            int maxB = *max_element(b.begin(), b.end());

            int source = -1;
            for (int i = 0; i < n; i++) {
                if (a[i] == maxB) {
                    source = i;
                    break;
                }
            }

            if (source == -1) {
                for (int i = 0; i < n; i++) {
                    if (b[i] == maxB) {
                        source = i;
                        break;
                    }
                }
            }

            for (int i = 0; i < n; i++) {
                if (a[i] != b[i]) {
                    ops.push_back({i+1, source+1});
                    a[i] = b[i];
                }
            }

            cout << ops.size() << endl;
            
            for (auto &p : ops) {
                cout << p.second << " " << p.first << endl;
            }
        }
    }
    return 0;
}
