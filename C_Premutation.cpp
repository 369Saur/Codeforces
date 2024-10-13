#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<vector<int>> v(n , vector<int>(n-1)) ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n-1 ; j++){
                cin >> v[i][j] ;
            }
        }
        vector<int> ans(n) ;
        if(v[0][0] == v[1][0]) ans[0] = v[0][0] ;
        else if(v[0][0] == v[2][0]) ans[0] = v[0][0] ;
        else ans[0] = v[2][0] ;
        for(int j = 0 ; j < n-1 ; j++){
            for(int i = 0 ; i < n ; i++){
                if(v[i][j] != ans[j]) ans[j+1] = v[i][j] ;
            }
        }
        for(int i = 0 ; i < n ; i++ ) cout << ans[i] << " " ;
        cout << endl ;
    }
    return 0;
}