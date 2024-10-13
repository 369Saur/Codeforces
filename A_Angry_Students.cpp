#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    int count = 0 , maxi = 0 ;
    int i = 0 , j = 1 ;
    while(j < n){
        if(s[i] == 'A' && s[j] == 'P'){
            while(s[j] == 'P'){
                count++ ;
                maxi = max(maxi , count) ;
                j++ ;
            }
            count = 0 ;
        }
        i = j ;
        j++ ;
    }
    cout << maxi << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}