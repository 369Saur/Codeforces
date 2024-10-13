#include<bits/stdc++.h>
using namespace std;

void solve(long long n){
    if(n % 2 || n == 2){
        cout << -1 ;
    }
    else{
        n /= 2 ;
        if(n % 3 == 0) cout << n/3 << " " ;
        else cout << n/3 + 1 << " " ;
        cout << n/2 ;
    }
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        solve(n) ;
        cout << endl ;
    }
    return 0;
}