#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k ;
    cin >> n >> k ;
    string s ; cin >> s ;
    sort(s.begin() , s.end()) ;
    string ans = "" ;
    ans += s[0] ;
    int j = 0 ;
    for(int i = 1 ; i < n ; i++){
        if(ans.size() == k) break ;
        else if(s[i]-ans[j] >= 2){
            ans += s[i] ;
            j++ ;
        } 
    }
    if(ans.size() != k){
        cout << -1 ;
        return ;
    }
    int count = 0 ;
    for(int i = 0 ; i < k ; i++){
        count += (ans[i]-'a'+1) ;
    }
    cout << count ;
}

signed main() {
    solve() ;
    return 0;
}