#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n , k ;
    cin >> n >> k ;
    string s ; cin >> s ;
    unordered_map<char,int> mp ;
    for(int i = 0 ; i < n ; i++) mp[s[i]]++ ;
    int mini = INT_MAX ;
    if(mp.size() >= k){
        for(auto i : mp){
            mini = min(mini , i.second) ;
        }
        cout << mini*k ;
    }
    else{
        cout << 0 ;
    }
    return 0;
}