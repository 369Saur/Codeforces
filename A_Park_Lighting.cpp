#include<bits/stdc++.h>
using namespace std;

int driver (int x , int y) {
    int cells = x*y ;
    int lights = cells / 2 ;
    if(cells % 2){
        lights++ ;
    }
    return lights ;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int x , y ;
        cin >> x >> y ;
        cout << driver(x , y) << endl ;
    }
    return 0;
}