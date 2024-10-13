#include<bits/stdc++.h>
#define long long int ;
using namespace std;

int solve(int n){
    int x = 3 ;
    int y = 2 ;
    while(true){
        if(n % x == 0){
            return n/x ;
        }
        else{
            y *= 2 ;
            x += y ;
        }
    }
}

signed main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        cout << solve(n) << endl ;
    }
    return 0;
}