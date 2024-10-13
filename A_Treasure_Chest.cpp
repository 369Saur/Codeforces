#include<bits/stdc++.h>
using namespace std;

int driver(int x , int y , int k){
    if(x >= y){
        return x ;
    }
    if(x < y && (y - x) <= k){
        return y ;
    }
    if(x < y && (y - x) > k){
        int a = x + k ;
        return a + 2*(y - a) ;
    }
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int x , y , k ;
        cin >> x >> y >> k ;
        cout << driver(x , y , k) << endl ;
    }
    return 0;
}