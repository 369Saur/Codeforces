#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int m ;
    cin >> m ;
    vector<int> u(m) ;
    for(int i = 0 ; i < m ; i++){
        cin >> u[i] ;
    }
    sort(v.begin() , v.end()) ;
    sort(u.begin() , u.end()) ;
    cout << v[n-1] << " " << u[m-1] ;
    return 0;
}