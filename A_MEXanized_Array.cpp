#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n , k , x ;
        cin >> n >> k >> x ;
        int ans = 0 ;
        if(k > n){
            cout << -1 << endl ;
            continue ;
        }
        if(k > x+1){
            cout << -1 << endl ;
            continue ;
        }
        for(int i = 0 ; i < k ; i++){
            ans += i ;
        }
        int i = k ;
        while(i < n){
            if(k == x){
                ans += (x-1) ;
            }
            else{
                ans += x ;
            }
            i++ ;
        }
        cout << ans << endl ;
    }
    return 0;
}