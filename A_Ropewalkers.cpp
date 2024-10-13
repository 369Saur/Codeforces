#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    vector<int> v(3) ;
    cin >> v[0] >> v[1] >> v[2] ;
    int d ; cin >> d ;
    sort(v.begin() , v.end()) ;
    int count = 0 ;
    if(v[1]-v[0] < d){
        count += (d-(v[1]-v[0])) ;
    }
    if(v[2]-v[1] < d){
        count += (d-(v[2]-v[1])) ;
    }
    cout << count ;
    return 0;
}