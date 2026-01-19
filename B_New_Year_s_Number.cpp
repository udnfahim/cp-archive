#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin >> t ;
    while ( t--){
        int n ; 
        cin >> n;
        int even = n / 2020;
        int odd = n % 2020 ;
        if ( even >= odd ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0 ;
}