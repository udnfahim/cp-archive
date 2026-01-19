#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n ;
    vector <int> a(n);
    for ( int i = 0 ; i < n; i ++){
        cin >> a[i];
    }
    int even = 0 ;
    int odd = 0 ;
    for ( int i = 0 ; i < n ; i ++){
        if (a[i] % 2 == 0 ){
            even ++ ;
        }
        else {
            odd ++ ;
        }
    }
    if (even < odd ){
        for ( int i = 0 ; i < n ; i ++){
            if ( a[i] % 2 == 0){
                cout << i +1 << endl;
                break;
            }
        }
    }
    else{
        for ( int i = 0 ; i < n ; i ++){
            if ( a[i] % 2 != 0){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0 ;
}
