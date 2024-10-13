#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    stack<char> st ;
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == ')' && st.empty()){
            count++ ;
        }
        if(s[i] == '('){
            st.push(s[i]) ;
        }
        if(s[i] == ')' && !st.empty()){
            st.pop() ;
        }
    }
    cout << count << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}