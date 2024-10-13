#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    int count = 0 , sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        count += (v[i] < 0) ;
        v[i] = abs(v[i]) ;
        sum += v[i] ;
    } 
    int mini = *min_element(v.begin(),v.end()) ;
    if(count & 1) sum -= 2*mini ;
    cout << sum << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}