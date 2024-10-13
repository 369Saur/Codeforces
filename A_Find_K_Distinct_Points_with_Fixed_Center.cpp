#include<bits/stdc++.h>
using namespace std ;
#define int long long

void solve(){
    int xc , yc , k ;
    cin >> xc >> yc >> k ;

    if(k == 1) {
        cout << xc << " " << yc << endl;
        return;
    }

    vector<int> x;
    vector<int> y;

    for(int i=1; i<k; i++) {
        x.push_back(i*k);
        y.push_back(i*k);
    }

    int last = -(k*(k-1)/2*k);
    x.push_back(last);
    y.push_back(last);
    if(xc >= 0) x[x.size()-2] += (k*xc) ;
    else x[x.size()-1] += (k*xc) ;

    if(yc >= 0) y[y.size()-2] += (k*yc) ;
    else y[y.size()-1] += (k*yc) ;

    for(int i = 0 ; i < k ; i++){
        cout << x[i] << " " << y[i] << endl ;
    }

}

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}