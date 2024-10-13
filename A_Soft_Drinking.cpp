#include<bits/stdc++.h>
using namespace std;

int driver (int n , int k , int l , int c , int d , int p , int nl , int np) {
    int min = INT_MAX ;
    int total_ml = k*l / nl ; 
    int total_lime = c*d ; 
    int total_salt = p / np ;
    if(total_ml < total_lime && total_ml < total_salt){
        min = total_ml ;
    }
    else if(total_lime < total_salt){
        min = total_lime ;
    }
    else{
        min = total_salt ;
    }
    
    return min / n ;
}

int main() {
    int n , k , l , c , d , p , nl , np ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    cout << driver(n,k,l,c,d,p,nl,np) << endl ;
    return 0 ;
}