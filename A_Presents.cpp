#include<bits/stdc++.h>
using namespace std;

void driver (vector<int>& v , int n) {
    vector<int> ans(n) ;
    for(int i = 0 ; i < n ; i++){
        ans[v[i]-1] = i+1 ; 
    }
    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " " ;
    }
}

int main() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    driver(v , n) ;
    cout << endl ;
    return 0;
}