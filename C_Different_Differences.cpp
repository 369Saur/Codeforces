#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k , n ;
    cin >> k >> n ;
    vector<int> v(k) ;
    int x = 1 ;
    for(int i = 0 ; i < k ; i++){
        v[i] = x + i ;
        x += i ;
    }
    if(v[k-1] > n){
        v[k-1] = n ;
        int i = k-1 ;
        while(v[i] <= v[i-1] && i > 0){
            v[i-1] = v[i]-1 ;
            i-- ;
        }
    }
    for(int i = 0 ; i < k ; i++){
        cout << v[i] << " " ;
    }
    cout << endl ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        solve() ;
    }
    return 0;
}