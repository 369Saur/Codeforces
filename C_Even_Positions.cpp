#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    stack<int> st ;
    int open = 0 ;
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++){
        if((s[i] == '_' && open == 0) || s[i] == '('){
            open++ ;
            st.push(i) ;
        }
        else{
            open-- ;
            ans += (i - st.top()) ;
            st.pop() ;
        }
    }
    cout << ans << endl ;
}

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}