#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int l , r , a ;
    cin >> l >> r >> a ;
    while(a > 0){
        if(l == r && a >= 2){
            l++ ;
            r++ ;
            a -= 2 ;
        }
        else if(l != r){
            if(l > r){
                swap(l,r) ;
            }
            l++ ;
            a-- ;
        }
        else{
            break ;
        }
    }
    cout << min(l,r)*2 ;
    return 0;
}