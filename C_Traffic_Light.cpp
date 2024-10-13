#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        char c ; cin >> c ;
        string s ; cin >> s ;
        int maxi = 0 ;
        int i = 0 ;
        s += s ;
        for(int j = 0 ; j < 2*n ; j++){
            if(s[j] != 'g'){
                continue ;
            }
            while(i <= j){
                if(s[i] != c){
                    i++ ;
                }
                else{
                    break ;
                }
            }
            maxi = max(maxi , j-i) ;
            i = j+1 ;
        }
        cout << maxi << endl ;
    }
    return 0;
}