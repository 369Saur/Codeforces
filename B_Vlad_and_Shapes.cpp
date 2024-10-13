#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<vector<char>> v(n,vector<char>(n)) ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> v[i][j] ;
        }
    }
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(v[i][j] == '1') count++ ;
        }
    }
    if(count == 1){
        cout << "SQUARE" << endl ; 
        return ;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(v[i][j] == '1'){
                if(v[i][j+1] == '1' && v[i+1][j] == '1'){
                    cout << "SQUARE" << endl ;
                    return ;
                }
                else{
                    cout << "TRIANGLE" << endl ;
                    return ;
                }
            }
        }
    }
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}