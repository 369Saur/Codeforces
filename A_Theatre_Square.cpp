#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n , m , a ;
    cin >> n >> m >> a ;
    long long x = ceil(n*1.0/a)*ceil(m*1.0/a) ;
    cout << x ;
    return 0 ;
}