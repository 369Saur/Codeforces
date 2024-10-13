#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& v , int n){
    int count = 0 ;
    int h = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(v[i] > 0){
            h += v[i] ;
        }
        if(v[i] == -1 && h <= 0){
            count++ ;
        }
        if(h != 0 && v[i] == -1){
            h-- ;
        }
    }
    return count ;
}

int main() {
    int n ; 
    cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    cout << solve(v , n) ;
    return 0 ;
}