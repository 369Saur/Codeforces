#include<bits/stdc++.h>
using namespace std;

string solve(int n , int k , vector<int>& v){
    if(k == 1){
        for(int i = 0 ; i < n-1 ; i++){
            if(v[i] > v[i+1]){
                return "NO" ;
            }
        }
    }
    return "YES" ;
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        cout << solve(n , k , v) << endl ;
    }
    return 0;
}