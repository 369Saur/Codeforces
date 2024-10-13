#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(int n , vector<int>& v){
    vector<int> ans ;
    int count = 0 , sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(v[i] % 2){
            count++ ;
        }
        sum += v[i] ;
        if(i == 0){
            ans.push_back(v[i]) ;
        }
        else{
            if(count % 3 == 1){
                ans.push_back(sum-count/3-1) ;
            }
            else{
                ans.push_back(sum - count/3) ;
            }
        }
    }
    for(int i = 0 ; i < n ; i++) cout << ans[i] << " " ;
    cout << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++) cin >> v[i] ;
        solve(n , v) ;
    }
    return 0;
}