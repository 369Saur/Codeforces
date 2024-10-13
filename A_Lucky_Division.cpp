#include<bits/stdc++.h>
using namespace std;

string solve(int n){
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 447 == 0 || n % 474 == 0
    || n % 477 == 0 || n % 747 == 0 || n % 774 == 0){
        return "YES" ;
    }
    return "NO" ;
}

int main() {
    int n ;
    cin >> n ;
    cout << solve(n) << endl ;
    return 0;
}