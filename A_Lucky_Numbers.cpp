#include<bits/stdc++.h>
using namespace std;

int solve(int l , int r){
    vector<int> v(10 , 0) ;
    string s ;
    int x ;
    for(int i = l ; i <= r ; i++){
        s = to_string(i) ;
        sort(s.begin() , s.end()) ;
        x = s[s.size()-1] - s[0] ;
        v[x] = i ;
        if(x == 9){
            break ;
        }
    }
    for(int i = 9 ; i >= 0 ; i--){
        if(v[i] != 0){
            return v[i] ;
        }
    }
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int l , r ;
        cin >> l >> r ;
        cout << solve(l , r) << endl ;
    }
    return 0;
}