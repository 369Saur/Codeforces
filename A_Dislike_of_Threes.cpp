#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        int k ; 
        cin >> k ;
        int ans = 0 ;
        for(int i = 1 ; i <= k ; i++){
            if(i%3 == 0 || i%10 == 3){
                k += 1 ;
                continue ; 
            }
            else{
                ans = i ;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}