#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& v , int k){
    if(k == 0){
        return 0 ;
    }
    sort(v.begin() , v.end()) ;
    int j = 11 ;
    int count = 0 ;
    while(j >= 0){
        count += v[j] ;
        if(count >= k){
            return 11-j+1 ;
        }
        j-- ;
    }
    return -1 ;
}

int main() {
    int k ;
    cin >> k ;
    vector<int> v(12) ;
    for(int i = 0 ; i < 12 ; i++){
        cin >> v[i] ;
    }
    cout << solve(v , k) ;
    return 0;
}