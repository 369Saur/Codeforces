#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ; 
        cin >> n ;
        string s ;
        cin >> s ;
        vector<int> v(26) ;
        int flag = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(s[i] != s[i+1]){
                v[s[i] - 65]++ ;
            }
        }
        for(int i = 0 ; i < 26 ; i++){
            if(v[i] > 1){
                flag = 1 ;
                break ;
            }
        }
        if(flag == 0){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
    }
    return 0;
}