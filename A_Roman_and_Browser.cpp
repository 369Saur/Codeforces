#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n , k ; 
    cin >> n >> k ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    int maxi = INT_MIN ;
    int b = 0 ; 
    while(b < k){
        int e = 0 , s = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(i % k != b){
                if(v[i] == 1) e++ ;
                else s++ ;
            }
        }
        maxi = max(maxi,abs(e-s)) ;
        b++ ;
    }
    cout << maxi ;
    return 0;
}