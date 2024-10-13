#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n , v ;
    cin >> n >> v ;
    int x = n-v ;
    if(x <= 0){
        cout << n-1 ;
    }
    else{
        cout << v-1 + x*(x+1)/2 ;  
    }
    return 0 ;
}