#include<bits/stdc++.h>
using namespace std;

bool sorted(int& n , vector<int>& v){
    int x = 0 ; 
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i] <= v[i+1]){
            x = i+1 ;
        }
        else{
            break ;
        }
    }
    for(int i = x+1 ; i < n-1 ; i++){
        if(v[i] < v[i+1]){
            return false ;
        }
    }
    return true ;
}

string solve(int& n , vector<int>& v){
    if(sorted(n , v) || n < 3) return "YES" ;
    return "NO" ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++) cin >> v[i] ;
        cout << solve(n , v) << endl ;
    }
    return 0;
}