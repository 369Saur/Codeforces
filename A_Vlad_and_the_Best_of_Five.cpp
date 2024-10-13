#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s ; cin >> s ;
    int A = 0 , B = 0 ;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == 'A') A++ ;
        else B++ ;
    }
    if(A > B) cout << "A" << endl ;
    else cout << "B" << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}