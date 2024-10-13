#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k ;
        int x = 1 ;
        int y ;
        for(int i = 1 ; i <= n ; i++){
            cin >> y ;
            if(x == y){
                x++ ;
            }
        }
        int ans = ceil((float)(n-x+1)/(float)k) ;
        cout << ans << endl ;
    }
    return 0;
}