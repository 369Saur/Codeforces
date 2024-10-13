#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    if(n%10 <= 5){
        n -= (n%10) ;
    }
    else{
        n += (10-n%10) ;
    }
    cout << n ;
    return 0;
}