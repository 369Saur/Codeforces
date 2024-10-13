#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& v , int n){
    if(n == 1){
        return 0 ;
    }
    int maxi = -1 ;
    for(int i = 0 ; i < n-1 ; i++){
        maxi = max(maxi , v[i]-v[0]) ;
        maxi = max(maxi , v[n-1]-v[i]) ;
        maxi = max(maxi , v[i]-v[i+1]) ;
    }
    return maxi ;
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        cout << solve(v , n) << endl ;
    }
    return 0;
}