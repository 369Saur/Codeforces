#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    vector<int> dp(200100) ;
    dp[1] = 1 ;
    for(int i = 2 ; i < 200100 ; i++){
        int j = i , sum = 0 ;
        while(j > 0){
            sum += j%10 ;
            j /= 10 ;
        }
        dp[i] = dp[i-1]+sum ;
    }
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        cout << dp[n] << endl ;
    }
    return 0;
}