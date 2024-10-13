#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<string> v(n) ;
    set<string> st ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        st.insert(v[i]) ;
    }
    for(auto &i : v){
        int flag = 0 ;
        for(int j = 1 ; j < i.size() ; j++){
            if(st.find(i.substr(0,j)) != st.end() && st.find(i.substr(j)) != st.end()){
                flag = 1 ;
            }
            if(flag == 1){
                break ;
            }
        }
        cout << flag ;
    }
    cout << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}