#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    string s ; cin >> s ;
    string st ;
    int count = 0 ;
    int k = n ;
    while(k--){
        cin >> st ;
        if(st.substr(0,3) == s) count++ ;
    }
    if(n%2 && count%2) cout << "contest" ;
    else if(n%2 && count%2==0) cout << "contest" ;
    else if(n%2==0 && count%2) cout << "home" ;
    else cout << "home" ;
    return 0;
}