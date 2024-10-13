#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n , s ;
    cin >> n >> s ;
    int x = s/n ;
    if(s%n){
        x++ ;
    }
    cout << x ; 
    return 0;
}