#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--){ 
        int n ; 
        cin >> n ;
        vector<int> a(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        vector<int> b(n) ;
        for(int i = 0 ; i < n ; i++){
            b[i] = i+1 ;       
        }
        for(int i = 0 ; i < n ; i++){
            if(i == 0){
                if(a[i] == b[i]){
                    b[i]++ ;
                }
            }
            else{
                while(b[i] <= b[i-1]){
                    b[i]++ ;
                    continue ;
                }
            }
            if(a[i] == b[i]){
                b[i]++ ;
            }
        }
        cout << b[n-1] << endl ;
    }
    return 0;
}