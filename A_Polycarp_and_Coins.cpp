#include<bits/stdc++.h>
using namespace std;

void driver(int n){
    int two = n / 3 ;
    int one = n - 2*two ;
    if(abs(one - two) == 0 || abs(one - two) == 1){
        cout << one << " " << two ;        
    }
    else{
        cout << one-2 << " " << two+1 ;
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