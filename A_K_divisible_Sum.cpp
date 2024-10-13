#include<bits/stdc++.h>
using namespace std;

int solve(int n , int k){
    if(n == 1){
        return k ;
    }
    if(k % n == 0){
        return k/n ;
    }
    if(n % k == 0){
        return 1 ;
    }
    if(n > k){
        k *= (n/k + 1);
    }
    if(k % n){
        return k/n + 1 ; 
    }
    return k/n ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k ;
        cout << solve(n , k) << endl ;
    }
    return 0;
}