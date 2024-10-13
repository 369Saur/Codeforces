#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n){
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            return false ;
        }
    }
    return true ;
}

void solve(){
    int n ; 
    cin >> n ;
    if(n%2 == 0){
        cout << n/2 << " " << n/2 << endl ;
        return ;
    }
    if(isPrime(n)){
        cout << 1 << " " << n-1 << endl ;
        return ;
    }
    int maxi = 1 ;
    int x = n ;
    for(int i = 3 ; i <= sqrt(n) ; i += 2){
        if(x%i == 0){
            maxi = max(maxi,max(i,x/i)) ;
        }
    }
    cout << maxi << " " << n-maxi << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}