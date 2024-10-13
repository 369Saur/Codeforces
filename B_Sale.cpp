#include<bits/stdc++.h>
using namespace std;

int main() {
    int n , m ;
    cin >> n >> m ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        v[i] = (-1)*v[i] ;
    }
    sort(v.begin() , v.end() , greater<int>()) ;
    int sum = 0 , maxi = 0 ;
    for(int i = 0 ; i < m ; i++){
        sum += v[i] ;
        maxi = max(maxi , sum) ;
    }
    cout << maxi ;
    return 0;
}