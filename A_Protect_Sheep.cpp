#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int r , c ; 
    cin >> r >> c ;
    vector<vector<char>> v(r,vector<char>(c)) ;
    for(int i = 0 ; i < r ; i++) for(int j = 0 ; j < c ; j++) cin >> v[i][j] ;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            if(v[i][j] == '.') v[i][j] = 'D' ;
            if(v[i][j] == 'W'){
                if(i-1 >= 0 && v[i-1][j] == 'S'){
                    cout << "No" ;
                    return ;
                } 
                if(j+1 < c && v[i][j+1] == 'S'){
                    cout << "No" ;
                    return ;
                } 
                if(i+1 < r && v[i+1][j] == 'S'){
                    cout << "No" ;
                    return ;
                } 
                if(j-1 >= 0 && v[i][j-1] == 'S'){
                    cout << "No" ;
                    return ;
                } 
            }
        }
    }
    cout << "Yes" << endl ;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++) cout << v[i][j] ;
        cout << endl ;
    } 
}

signed main() {
    solve() ;
    return 0;
}