#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> v(2*n) ;
        for(int i = 0 ; i < 2*n ; i++){
            cin >> v[i] ;
        }
        int even = 0 , odd = 0 ;
        for(int i = 0 ; i < 2*n ; i++){
            if(v[i] % 2){
                odd++ ;
            }
            else{
                even++ ;
            }
        }
        if(even == odd){
            cout << "Yes" << endl ;
        }
        else{
            cout << "No" << endl ;
        }
    }
    return 0;
}