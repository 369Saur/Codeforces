#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n , m , x , y , d ;
    cin >> n >> m >> x >> y >> d ;
    if((x-d > 1 && y+d < m) || (x+d < n && y-d > 1)){
        return n+m-2 ;
    }
    return -1 ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        cout << solve() << endl ;
    }
    return 0;
}