#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    sort(v.begin() , v.end()) ;
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(v[i] != 0){
            count++ ;
            for(int j = i+1 ; j < n ; j++){
                if(v[j] % v[i] == 0) v[j] = 0 ;
            }
            v[i] = 0 ;
        }
    }
    cout << count ;
    return 0;
}