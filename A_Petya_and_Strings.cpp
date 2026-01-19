#include<bits/stdc++.h>
using namespace std;
int main(){
    string a , b ;
    cin >> a >> b ;
    int count_a = 0;
    for ( int i = 0 ; i < a.length() ; i ++){
        a[i] = tolower(a[i]);
    }
    for ( int i = 0 ; i < b.length() ; i ++){
        b[i] = tolower(b[i]);
    }
    // f u c k Lexicographical_order !
    if ( a < b ){
        cout << -1 << endl ;
    }
    else if ( a > b ) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0 ;
}