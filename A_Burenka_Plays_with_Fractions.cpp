#include<bits/stdc++.h>
using namespace std;

int driver(long long a , long long b , long long c , long long d){
    long long x = a*d ;
    long long y = b*c ;
    if(x == y){
        return 0 ;
    }
    else if(x == 0 || y == 0 || max(x,y)%min(x,y) == 0){
        return 1 ;
    }
    else{
        return 2 ;
    }
}

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        long long a , b , c , d ;
        cin >> a >> b >> c >> d ;
        cout << driver(a , b , c , d) << endl ;
    }
    return 0;
}