#include<bits/stdc++.h>
using namespace std;

bool ispower(int k){
    if((k & (k-1)) == 0){
        return true ;
    }
    return false ;
}

string driver(vector<int>& v , int n){
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i] <= v[i+1]){
            continue ;
        }
        else if(ispower(i+1)){
            continue ;
        }
        else{
            return "NO" ;
        }
    }
    return "YES" ;
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
        cout << driver(v , n) << endl ;
    }
    return 0;
}