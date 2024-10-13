#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int l , r ;
        cin >> l >> r ;
        if(r % l == 0){
            cout << l << " " << r << endl ;
        }
        else if(r % l != 0 && l != (r - r%l)){
            cout << l << " " << r-r%l << endl ;
        }
        else{
            cout << -1 << " " << -1 << endl ;
        }
    }
    return 0;
}