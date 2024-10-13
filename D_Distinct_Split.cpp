#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    unordered_map<char , int> mp1 , mp2 ;
    vector<int> pre(n) , suf(n) ;
    for(int i = 0 , j = n-1 ; i < n && j >= 0 ; i++ , j--){
        mp1[s[i]]++ ;
        mp2[s[j]]++ ;
        pre[i] = mp1.size() ;
        suf[j] = mp2.size() ;
    }
    int maxi = 0 ;
    for(int i = 0 ; i < n-1 ; i++){
        maxi = max(maxi , pre[i]+suf[i+1]) ;
    }
    cout << maxi << endl ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        solve() ;
    }
    return 0;
}