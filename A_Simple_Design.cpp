#include<bits/stdc++.h>
using namespace std;

int driver (int x , int k) {
    int sum = 0 ;
    int n = x ;
    while(n){
        sum += n%10 ;
        n /= 10 ;
    }
    if(sum % k == 0){
        return x ;
    }
    return driver(x + 1 , k) ;
}

int main() {
    int t; cin >> t;

    while(t--){ 
        int x , k ;
        cin >> x >> k ;
        cout << driver(x , k) << endl ;
    }
    return 0;
}