#include<bits/stdc++.h>
using namespace std;

int solve(int n , int m){
    if(n < m){
        return n ;
    }
    if(n == m){
        return n+1 ;
    }
    int i = 1 ;
    while(i < n){
        if(i % m == 0){
            n++ ;
        }
        i++ ;
    }
    if(n % m == 0){
        return i + 1 ;
    }
    return i ;
}

int main() {
    int n , m ;
    cin >> n >> m ;
    cout << solve(n , m) ;
    return 0;
}