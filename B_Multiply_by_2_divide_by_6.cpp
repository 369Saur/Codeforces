#include<bits/stdc++.h>
using namespace std;

int driver(long long n){
    if(n == 1){
        return 0 ;
    }
    int count = 0 ;
    while(n != 1){
        if((n & (n-1)) == 0 && n < 0){
            return -1 ;
        }
        if(n % 6 == 0){
            n /= 6 ;
        }
        else{
            n *= 2 ;
        }
        count++ ;
    }
    return count ;
}

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        cout << driver(n) << endl ;
    }
    return 0;
}