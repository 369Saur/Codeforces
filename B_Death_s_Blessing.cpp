#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        vector<int> health(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> health[i] ;
        }
        vector<int> spell(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> spell[i] ;
        }
        sort(spell.begin() , spell.end()) ;
        long long sec = 0 ;
        for(int i = 0 ; i < n ; i++){
            sec += health[i] ;
            sec += spell[i] ;
        }
        cout << sec-spell[n-1] << endl ;
    }
    return 0;
}