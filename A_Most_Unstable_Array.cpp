#include<bits/stdc++.h>
using namespace std;

int driver (int n , int m) {
    if(n == 1){
        return 0 ;
    }
    if(n == 2){
        return m ;
    }
    return 2*m ;
}

int main() {
    int t; cin >> t;

    while(t--){
        int n , m ;
        cin >> n >> m ;
        cout << driver(n , m) << endl ;
    }
    return 0;
}