#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int v[n][2] ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> v[i][j] ;
        }
    }
    int k ;
    cin >> k ;
    int count = n ;
    for(int i = 0 ; i < n ; i++){
        if(v[i][1] < k){
            count-- ;
        }
    }
    cout << count ;
    return 0;
}