#include<bits/stdc++.h>
using namespace std;
#define int long long

int coprime(int n , vector<int>& v , unordered_map<int,int>& mp){
    int maxi = -1 ;
    for(auto i : mp){
        for(auto j : mp){
            if(__gcd(i.first,j.first) == 1){
                maxi = max(maxi , i.second+ j.second) ;
            }
        }
    }
    return maxi ;
}

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    unordered_map<int,int> mp ;
    for(int i = n-1 ; i >= 0 ; i--){
        if(mp[v[i]]){
            continue ;
        }
        else{
            mp[v[i]] = i+1 ;
        }
    }
    cout << coprime(n,v,mp) << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}