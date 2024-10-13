#include<bits/stdc++.h>
using namespace std;
 
string solve(vector<int>& v , int n){
    if(v[0] == 1){
        return "YES" ;
    }
    return "NO" ;
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