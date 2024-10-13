#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--){
        int n ; 
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        sort(v.begin() , v.end()) ;
        v[0] += 1 ;
        int prod = 1 ;
        for(auto i : v){
            prod *= i ;
        }
        cout << prod << endl ;
    } 
    return 0;
}