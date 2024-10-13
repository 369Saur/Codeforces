#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n , d ;
    cin >> n >> d ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    int count = 2 ;
    for(int i = 1 ; i < n ; i++){
        int x = v[i]-v[i-1] ;
        if(x >= 2*d){
            count++ ;
            if(x > 2*d){
                count++ ;
            }
        }
    }
    cout << count ;
    return 0;
}