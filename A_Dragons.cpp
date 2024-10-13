#include<bits/stdc++.h>
using namespace std;

string solve(int s , int n){
    vector<vector<int>> v(n , vector<int>(2)) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i][0] >> v[i][1] ;
    }
    sort(v.begin() , v.end()) ;
    for(int i = 0 ; i < n ; i++){
        if(s > v[i][0]){
            s += v[i][1] ; 
        }
        else{
            return "NO" ;
        }
    }
    return "YES" ;
}

int main() {
    int s , n ;
    cin >> s >> n ;
    cout << solve(s , n) ;
    return 0;
}