#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , x , y ;
    cin >> n >> x >> y ;
    if((x == 0 && y == 0) || (x != 0 && y != 0) || ((n-1)%max(x,y)!= 0)){
        cout << -1 ;
        return ;
    }
    x = max(x,y) ;
    int z = 2 ;
    for(int i = 1 ; i <= (n-1)/x ; i++){
        int temp = x ;
        while(temp--){
            cout << z << " " ;
        }
        z += x ;
    }
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        solve() ;
        cout << endl ;
    }
    return 0;
}