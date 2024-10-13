#include<bits/stdc++.h>
using namespace std;

driver () {
}

void pos(int n , vector<int>& v1){
    for(int i=0 ; i<v1.size() ; i++)
}

int main() {
    int n ; 
    cin >> n ;
    vector<int> v1(n) ;
    for(int i=0 ; i<n ; i++){
        cin >> v1[i] ;
    }
    int m ; 
    cin >> m ;
    vector<int> v2(m) ;
    for(int i=0 ; i<m ; i++){
        cin >> v2[i] ;
    }
    for(int i=0 ; i<m ; i++){
        pos(v2[i] , v1) ;
    }
    return 0;
}