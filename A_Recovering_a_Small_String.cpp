#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    string s = "abcdefghijklmnopqrstuvwxyz" ;
    if(n >= 3 && n <= 28){
        cout << "aa" ;
        cout <<s[n-2-1] ;
    }
    else if(n > 28 && n < 53){
        cout << "a" ;
        if(n!=52){
            cout << s[n%26-1-1] ;
        }
        else{
            cout << "y" ;
        }
        cout << "z" ;
    }
    else if(n >= 53 && n <= 78){
        if(n != 78){
            cout << s[n%26-1] ;
        }
        else{
            cout << "z" ;
        }
        cout << "zz" ;
    }
    cout << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}