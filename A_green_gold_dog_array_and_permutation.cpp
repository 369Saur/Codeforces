#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--){
        int n ; 
        cin >> n ;
        vector<int> v(n) ;
        vector<int> ans(n) ;
        multimap<int , int> mp ;
        for(int i=0 ; i<n ; i++){
            cin >> v[i] ;
            mp.insert({v[i] , i+1});
        }
        int k=n;
        for(auto i : mp){
            ans[i.second-1]=k ;
            k--;
        }
        for(int i=0;i<n; i++){
            cout << ans[i] << " " ;
        }
        cout << endl ;
    }
    return 0;
}