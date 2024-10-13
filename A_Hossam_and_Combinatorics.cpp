#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        sort(v.begin() , v.end()) ;
        long long mini = v[0] ;
        long long maxi = v[n-1] ;
        long long mincount = 0 , maxcount = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(v[i] == mini){
                mincount++ ;
            }
            if(v[i] == maxi){
                maxcount++ ;
            }
        }
        if(maxcount == n){
            cout << n*(n-1) ;
        }
        else{
            cout << 2*mincount*maxcount ;
        }
        cout << endl ;
    }
    return 0;
}