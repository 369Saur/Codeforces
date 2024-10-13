#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin >> t ;
    while(t--){
        int x , n ;
        cin >> x >> n ;
        int maxi = INT_MIN ;
        for(int i = sqrt(x) ; i >= 1 ; i--){
            if(x % i == 0 && x/i >= n) maxi = max(maxi , i) ;
            if(x % i == 0 && i >= n) maxi = max(maxi , x/i) ;
        }
        cout << maxi << endl ;
    }
    return 0;
}