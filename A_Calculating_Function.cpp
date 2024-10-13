#include<bits/stdc++.h>
using namespace std;

long long driver (long long n) {
    if(n % 2 == 0){
        return n / 2 ;
    }
    else{
        n = n/2 + 1 ;
        return -1*n ;
    }
}

int main() {
    long long n ;
    cin >> n ;
    cout << driver(n) << endl ;
    return 0;
}