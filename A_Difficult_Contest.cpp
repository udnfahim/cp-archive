#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string forT = "", others = "";

        for (char c : s) {
            if (c == 'T')
                forT += c;
            else
                others += c;
        }

        cout << forT + others << endl;
    }

    return 0;
}
