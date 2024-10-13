#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int n , q ;
    cin >> n >> q ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    sort(v.begin() , v.end() , greater<int>()) ;
    vector<int> pre(n+1) ;
    for(int i = 0 ; i < n ; i++){
        pre[i+1] = pre[i] + v[i] ;
    }
    for(int i = 0 ; i < q ; i++){
        int x , y ;
        cin >> x >> y ;
        int ans = pre[x] - pre[x-y] ;
        cout << ans << endl ;
    }
    return 0;
}