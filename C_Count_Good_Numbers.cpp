#include <iostream>
using namespace std;

// Check if a number is prime
bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Check if a number is "good"
bool isGood(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            if (i < 10) return false; // if it has small prime factor
            n /= i;
        }
    }
    if (n > 1 && n < 10) return false; // last remaining prime < 10
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        int count = 0;
        for (long long i = l; i <= r; i++) {
            if (isGood(i)) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
