#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n) , b(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        for(int i = 0 ; i < n ; i++){
            cin >> b[i] ;
        }
        vector<vector<int>> v(n,vector<int>(2)) ;
        for(int i = 0 ; i < n ; i ++){
            v[i][0] = a[i] ;
            v[i][1] = b[i] ;
        }
        sort(v.begin() , v.end()) ;
        for(int i = 0 ; i < n ; i++){
            cout << v[i][0] << " " ;
        }
        cout << endl ;
        for(int i = 0 ; i < n ; i++){
            cout << v[i][1] << " " ;
        }
        cout << endl ;
    }
    return 0;
}