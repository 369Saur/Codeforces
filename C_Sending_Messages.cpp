#include<bits/stdc++.h>
using namespace std;

string solve(vector<int>& v , long long n , long long f , long long a , long long b){
    long long x = (v[0] - 0)*a ;
    long long y = b ;
    f -= min(x , y) ;
    if(f <= 0){
        return "NO" ;
    }
    for(int i = 1 ; i < n ; i++){
        x = (v[i] - v[i-1])*a ;
        y = b ;
        f -= min(x , y) ;
        if(f <= 0){
            return "NO" ;
        }
    }
    return "YES" ;
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        long long n , f , a , b ;
        cin >> n >> f >> a >> b ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        sort(v.begin() , v.end()) ;
        cout << solve(v , n , f , a , b) << endl ;
    }
    return 0;
}