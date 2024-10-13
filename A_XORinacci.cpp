#include<bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,n ;
    cin>>a>>b>>n ;
    int x = a^b ;
    if(n%3 == 0){
        cout << a << endl ;
    }
    else if(n%3 == 1){
        cout << b << endl ;
    }
    else{
        cout << x << endl ;
    }
}

int main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}