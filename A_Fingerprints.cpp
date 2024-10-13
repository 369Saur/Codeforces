#include<bits/stdc++.h>
using namespace std;

void linear_search(vector<int>& v , int key , int n , vector<int>& ans){
    for(int i = 0 ; i < n ; i++){
        if(key == v[i]){
            ans[i] = v[i] ;
        }
    }
}

int main() {
    int n , m ;
    cin >> n >> m ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    vector<int> u(m) ;
    for(int i = 0 ; i < m ; i++){
        cin >> u[i] ;
    }
    vector<int> ans(n , -1) ;
    for(int i = 0 ; i < m ; i++){
        linear_search(v , u[i] , n , ans) ;
    }
    for(int i = 0 ; i < n ; i++){
        if(ans[i] != -1){
            cout << ans[i] << " " ;
        }
    }
    return 0;
}