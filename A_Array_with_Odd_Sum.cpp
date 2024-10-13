#include<bits/stdc++.h>
using namespace std;

void driver (vector<int>& v , int n) {
    int sum = 0  , even = 0 , odd = 0 ;
    for(auto i : v){
        sum += i ; 
        if(i % 2){
            odd++ ;
        }
        else{
            even++ ;
        }
    }
    if(sum % 2 != 0 || (odd >= 1 && even >= 1)){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
}

int main() {
    int t; cin >> t;

    while(t--){
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        driver(v , n) ;
        cout << endl ;
    } 
    return 0;
}