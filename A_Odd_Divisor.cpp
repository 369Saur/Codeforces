#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        if((n & (n-1)) == 0){
            cout << "NO" ;
        }
        else{
            cout << "YES" ;
        }
        cout << endl ;
    }
    
    return 0;
}