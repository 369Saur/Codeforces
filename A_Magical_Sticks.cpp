#include<bits/stdc++.h>
using namespace std;

int driver (int n) {
    int x = n / 2 ;
    if(n % 2){
        x++ ;
    }
    return x ;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n ;
        cin >> n ;
        cout << driver(n) << endl ;
    }
    return 0;
}