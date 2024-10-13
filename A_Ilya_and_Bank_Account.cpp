#include<bits/stdc++.h>
using namespace std;

long long driver(long long n){
    if(n >= 0){
        return n ;
    }
    long long x = (n - n%10)/10 ;
    long long y = (n - n%100)/10 + n%10 ;
    if(x > y){
        return x ;
    }
    return y ;
}

int main() {
    long long n ; 
    cin >> n ;
    cout << driver(n) << endl ;
    return 0;
}