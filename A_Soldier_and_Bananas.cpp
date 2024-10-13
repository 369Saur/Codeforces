#include<bits/stdc++.h>
using namespace std;

int driver (int k , int n , int w) {
    int amount = k*(w*(w+1)/2) ;
    if(amount > n){
        return amount - n ;
    }
    return 0 ;
}

int main() {
    int k , n , w ;
    cin >> k >> n >> w ;
    cout << driver(k , n , w) << endl ;
    return 0;
}