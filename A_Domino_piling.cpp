#include<bits/stdc++.h>
using namespace std;

int driver (int m , int n) {
    int x = m*n ;
    return x / 2 ;
}

int main() {
        int m , n ;
        cin >> m >> n ;
        cout << driver(m , n) << endl;
    return 0;
}