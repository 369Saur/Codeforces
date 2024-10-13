#include<bits/stdc++.h>
using namespace std;

int driver (int a , int b , int c , int d) {
    int count = 0 ;
    if(b > a){
        count++ ;
    }
    if(c > a){
        count++ ;
    }
    if(d > a){
        count++ ;
    }
    return count ;
}

int main() {
    int t; cin >> t;

    while(t--){
        int a , b , c , d ;
        cin >> a >> b >> c >> d ;
        cout << driver(a , b , c , d) << endl;
    }
    return 0;
}