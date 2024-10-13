#include<bits/stdc++.h>
using namespace std;

int driver (int n , int x) {
    int count = 1 ;
    if(n <= 2){
        return count ;
    }
    n -= 2 ;
    while(n > 0){
        count++ ;
        n -= x ;
    }
    return count ;
}

int main() {
    int t; cin >> t;

    while(t--){
        int n , x ;
        cin >> n >> x ;
        cout << driver(n , x) << endl ;
    }
    return 0;
}