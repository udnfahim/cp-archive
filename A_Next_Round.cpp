#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k ;
    cin >> n >> k;
    vector <int> a(n);
    int result = 0 ;
    for ( int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    int level = a[k-1];
    for ( int i = 0 ; i < n ; i ++){
        if (a[i] >= level && a[i] > 0 ){
            result ++;
        }
    }
    cout << result << endl ;
    return 0;
}