#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    unordered_map<int,int> mp ;
    for(int i = 0 ; i < n ; i++){
        if(v[i] != 0){
            mp[v[i]]++ ;
        }
    }
    cout << mp.size() ;
    return 0;
}