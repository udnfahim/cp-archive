#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while ( t--){
        int n ; 
        cin >> n ;
        vector <int> a (n);
        vector <int> b (n);
        for ( int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        for ( int i = 0 ; i < n ; i++){
            cin >> b[i] ;
        }
        int iteration = 1;
        for ( int i = 0 ; i < n ; i++ ){
            for ( int j = 0  ; j < 10 ; j ++){
                if ( a[i] > b[i]){
                    a[i]--;
                    iteration++ ;
                }
                else if (a[i] < b[i]){
                    break;
                }
            }
        }
        cout << iteration << endl;
    }
    return 0;
}