#include<bits/stdc++.h>
using namespace std;

int driver (int n , int k) {
    while(k--){
        if(n % 10){
            n-- ;
        }
        else{
            n /= 10 ;
        }
    }
    return n ;
}

int main() {
    int n , k ;
    cin >> n >> k ;
    cout << driver(n , k) << endl;
    return 0;
}