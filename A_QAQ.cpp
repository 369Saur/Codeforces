#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    string s ; cin >> s ;
    int n = s.size() ;
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'Q'){
            for(int j = i+1 ; j < n ; j++){
                if(s[j] == 'A'){
                    for(int k = j+1 ; k < n ; k++){
                        if(s[k] == 'Q') count++ ;
                    }
                }
            }
        }
    }
    cout << count ;
    return 0;
}