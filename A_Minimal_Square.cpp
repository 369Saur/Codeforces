#include<bits/stdc++.h>
using namespace std;

int driver (int l , int b) {
    if(l > b) swap(l , b) ;
    l *= 2 ;
    if(l > b){
        return l*l ;
    }
    else{
        return b*b ;
    }
}

int main() {
    int t; cin >> t;

    while(t--){
        int l , b ;
        cin >> l >> b ;
        cout << driver(l , b) << endl ;
    }
    return 0;
}