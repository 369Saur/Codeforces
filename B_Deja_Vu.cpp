#include<bits/stdc++.h>
using namespace std;

void driver(int n , int q , vector<int>& a , vector<int>& x){
    
}

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        int n , q ;
        cin >> n >> q ;
        vector<int> a(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        vector<int> x(q) ;
        for(int i = 0 ; i < q ; i++){
            cin >> x[i] ;
        }
        driver(n , q , a , x) ;
        for(int i = 0 ; i < n ; i++){
            cout << a[i] << " " ;
        }
        cout << endl ;
    }
    return 0;
}