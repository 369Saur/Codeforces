#include<bits/stdc++.h>
using namespace std;

void driver (int x , int y , int z) {
    if(x == y && y == z){
        cout << "YES" << endl ;
        cout << x << " " << y << " " << z ;
    }
    else if(x == z && y < x){
        cout << "YES" << endl ;
        cout << x << " " << y << " " << y ;
    }
    else if(x == y && z < x){
        cout << "YES" << endl ;
        cout << x << " " << z << " " << z ;
    }
    else if(z == y && x < y){
        cout << "YES" << endl ;
        cout << x << " " << x << " " << z ;
    }
    else{
        cout << "NO" ;
    }
}

int main() {
    int t; cin >> t;

    while(t--) {
        int x , y , z ;
        cin >> x >> y >> z ;
        driver(x , y , z) ;
        cout << endl ;
    }
    return 0;
}