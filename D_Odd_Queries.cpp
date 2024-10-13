#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        long long n , q ;
        cin >> n >> q ;
        vector<int> v(n+1) ;
        v[0] = 0 ;
        long long total = 0 ;
        for(int i = 1 ; i <= n ; i++){
            long long x ;
            cin >> x ;
            v[i] = v[i-1] + x ;
            total += x ;
        }
        while(q--){
            int l , r , k ;
            cin >> l >> r >> k ;
            long long sum = total - (v[r] - v[l-1] ) ;
            sum += (r-l+1)*k ;
            if(sum % 2){
                cout << "YES" << endl ;
            }
            else{
                cout << "NO" << endl ;
            }
        }
    }
    return 0;
}