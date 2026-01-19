#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n ;
    vector < int > a(n);
    for ( int i = 0 ; i < n ; i ++){
        cin >> a[i] ;
    }
    int max_length = 1 ;
    for ( int i = 0 ; i < n-1 ; i ++){
        int length = 0 ;
        int j = 0;
        if (a[i] <= a[i+1]){
            length ++;
            for ( j = i ; j < n-1 ; j ++){
                if(a[j] <= a[j + 1] ){
                    length ++ ;
                    i = j ;
                }
                else{
                    i = j;
                    break;
                }
            }
        }
        else if( j == n ){
            break;
        }
        max_length = max(max_length , length);
    }
    cout << max_length << endl;
    return 0 ;
}