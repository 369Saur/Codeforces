#include<bits/stdc++.h>
using namespace std;

int main() {
    int n , k ;
    cin >> n >> k ;
    int r = 2*n , g = 5*n , b = 8*n ;
    int count = 0 ;
    count += r/k ;
    if(r % k != 0){
        count++ ;
    }
    count += g/k ;
    if(g % k != 0){
        count++ ;
    }
    count += b/k ;
    if(b % k != 0){
        count++ ;
    }
    cout << count ;
    return 0;
}