#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    string s ; cin >> s ;
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '-'){
            count-- ;
            if(count < 0){
                count = 0 ;
            }
        }
        else count++ ;
    }
    if(count < 0) cout << 0 ;
    else cout << count ;
    return 0;
}