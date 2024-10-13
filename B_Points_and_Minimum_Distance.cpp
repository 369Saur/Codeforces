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
        sort(v.begin() , v.end()) ;
        int sum = 0 ;
        for(int i = 1 ; i < n ; i++){
            sum += abs(v[i] - v[i-1]) ;
        }
        for(int i = n+1 ; i < 2*n ; i++){
            sum += abs(v[i] - v[i-1]) ;
        }
        cout << sum << endl ;
        int i = 0 , j = 2*n-1 ;
        while(i < j){
            cout << v[i] << " " << v[j] << endl ;
            i++ ;
            j-- ;
        }
    }
    return 0;
}