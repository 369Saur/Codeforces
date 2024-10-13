#include<bits/stdc++.h>
using namespace std;

void driver (int a , int b , int c , int n) {
    if(a < b) swap(a , b) ;
    if(a < c) swap(a , c) ;
    n -= (a - b) ;
    b += (a - b) ;
    n -= (a - c) ;
    c += (a - c) ;
    if(n % 3 == 0 && a == b && b == c && n >= 0){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
}

int main() {
    int t; cin >> t;

    while(t--){
        int a , b , c , n ;
        cin >> a >> b >> c >> n ;
        driver(a , b , c , n) ;
        cout << endl ;
    }
    return 0;
}