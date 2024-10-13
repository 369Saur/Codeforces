#include<bits/stdc++.h>
using namespace std;

void solve(int n , int t){
    if(n == 1 && t == 10){
        cout << -1 ;
        return ;
    }
    if(t == 10){
        cout << 1 ;
        for(int i = 0 ; i < n-1 ; i++){
            cout << 0 ;
        }
        return ;
    }
    for(int i = 0 ; i < n ; i++){
        cout << t ;
    }
}

int main() {
    int n , t ;
    cin >> n >> t ;
    solve(n,t) ;
    return 0;
}