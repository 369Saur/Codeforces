#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    int fact = 1 ;
    for(int i = 2 ; i < n ; i++) fact *= i ;
    fact *= 2 ;
    cout << fact/n ;
    return 0;
}