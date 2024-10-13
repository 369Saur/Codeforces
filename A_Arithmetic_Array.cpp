#include<bits/stdc++.h>
using namespace std;

int driver(int n , vector<int>& v){
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += v[i] ;
    }
    if(sum == n){
        return 0 ;
    }
    if(sum < n){
        return 1 ;
    }
    else{
        return sum - n ;
    }
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ; 
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        cout << driver(n , v) << endl ;
    }
    return 0;
}