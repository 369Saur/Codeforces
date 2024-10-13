#include<bits/stdc++.h>
using namespace std;

string func(unordered_map<string , int> &mp , string &s , int n){
    if(n <= 3){
        return "NO" ;
    }
    for(int i = 0 ; i < n-3 ; i++){
        mp[s.substr(i,2)]++ ;
        if(mp.find(s.substr(i+2,2)) != mp.end()){
            return "YES" ;
        }
    }
    return "NO" ;
}

void solve(){
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    unordered_map<string , int> mp ;
    cout << func(mp , s , n) << endl ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        solve() ;
    }
    return 0;
}