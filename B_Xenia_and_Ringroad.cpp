#include<bits/stdc++.h>
using namespace std;

long long solve(long long n , long long m , vector<long long>& v){
    long long count = 0 ;
    for(int i = 1 ; i <= m ; i++){
        if(v[i] >= v[i-1]){
            count += (v[i] - v[i-1]) ;
        }
        else{
            count += (n - (v[i-1]-v[i])) ;
        }
    }
    return count ;
}

int main() {
    long long n , m ;
    cin >> n >> m ;
    vector<long long> v(m+1) ;
    v[0] = 1 ;
    for(int i = 1 ; i <= m ; i++){
        cin >> v[i] ;
    }
    cout << solve(n,m,v) ;
    return 0;
}