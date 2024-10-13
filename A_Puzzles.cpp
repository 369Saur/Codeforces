#include<bits/stdc++.h>
using namespace std;

int main() {
    int n , m ;
    cin >> n >> m ;
    vector<int> v(m) ;
    for(int i = 0 ; i < m ; i++){
        cin >> v[i] ;
    }
    sort(v.begin() , v.end()) ;
    int mini = INT_MAX ;
    int i = 0 , j = n-1 ;
    while(j < m){
        mini = min(mini , v[j] - v[i]) ;
        i++ ;
        j++ ;
    }
    cout << mini ;
    return 0;
}