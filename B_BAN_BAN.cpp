#include<bits/stdc++.h>
using namespace std;

void driver(int n){
    cout << (n+1)/2 << endl ;
    int i = 1 , j = 3*n ;
    while(i < j){
        cout << i << " " << j << " " ;
        i += 3 ;
        j -= 3 ;
    }
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        driver(n) ;
        cout << endl ;
    }
    return 0;
}