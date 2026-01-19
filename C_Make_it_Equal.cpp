#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin >> t ;
    while( t-- ){
        int n , k ;
        cin >> n >> k;
        vector <int> a(n) ;
        vector <int> b(n) ;
        for ( int i = 0 ; i < n ; i++) cin >> a[i];
        for ( int i = 0 ; i < n ; i++) cin >> b[i];
        int total = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for ( int i = 0 ; i < n ; i ++){
            if (a[i] + k == b[i]){
                total ++;
            }
            else if (abs(a[i] - k) == b[i]){
                total ++ ;
            }
        }
        if ( total == n ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}