#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        int a , b , c , d ;
        cin >> a >> b >> c >> d ;
        if((a < c && a < d && b < c && b < d) || (a > c && a > d && b > c && b > d)){
            cout << "NO" << endl ;
        }
        else{
            cout << "YES" << endl ;
        }
    }
    return 0;
}