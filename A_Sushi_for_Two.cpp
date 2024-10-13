#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    int x = 0 , y = 0 , maxi = -1 ;
    int i = 0 , j = 0 ;
    while(j < n && i <= j){
        while(v[i] == v[j] && j < n){
            x++ ;
            j++ ;
        }
        i = j ;
        while(v[i] == v[j] && j < n){
            y++ ;
            j++ ;
        }
        j = i ;
        maxi = max(maxi,min(x,y)) ;
        x = 0 , y = 0 ;
    }
    cout << 2*maxi ;
    return 0;
}