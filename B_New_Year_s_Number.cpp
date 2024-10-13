#include<bits/stdc++.h>
using namespace std;

string driver(int n){
    int div = n / 2020 ;
    int rem = n % 2020 ;
    if(div >= rem){
        return "YES" ;
    }
    return "NO" ;
}

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        cout << driver(n) << endl ;
    }
    return 0;
}