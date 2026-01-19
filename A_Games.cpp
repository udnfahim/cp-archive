#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n ;
    vector < int > ha(n) ;
    vector <int > aa(n) ;
    int change = 0;
    for ( int i  = 0 ; i < n ; i ++ ){
        cin >> ha[i] >> aa[i];
    }
    for ( int i = 0 ; i < n ; i ++){
        for ( int j = 0 ;  j < n ; j ++){
            if ( ha [j] == aa[i]){
                change ++;
            }
        }
    }
    cout << change << endl;
    return 0;
}