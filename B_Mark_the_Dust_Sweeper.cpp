#include<bits/stdc++.h>
using namespace std;

long long driver(long long n , vector<int>& v){
    long long count = 0 , x = n ;
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i] != 0){
            x = i+1 ;
            break ;
        }
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i] != 0){
            count += (v[i]-1) ;
        }
    }
    count += (n-x) ;
    return count ;
}

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        cout << driver(n , v) << endl ;
    }
    return 0;
}