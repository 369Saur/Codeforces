#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n , m ;
    cin >> n >> m ;
    vector<vector<char>> table(n,vector<char>(m)) ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> table[i][j] ;
        }
    }
    int B = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(table[i][j] == 'B') B++ ;
        }
    }
    int x = sqrt(B)/2 ;
    int y = 0 , z = 0 , flag = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(table[i][j] == 'B'){
                y = i ;
                z = j ;
                flag = 1 ;
                break ;
            }
        }
        if(flag == 1){
            break ;
        }
    }
    y += x ;
    z += x ;
    cout << y+1 << " " << z+1 ;
    return 0;
}