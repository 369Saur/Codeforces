#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--){
        int n ;
        cin >> n ;
        vector<int> v(5) ;
        for(int i = 0 ; i < 5 ; i++){
            v[i] = n % 10 ;
            n /= 10 ;
        }
        int count = 0 , place = 1 ;
        for(auto i : v){
            if(i){
                count++ ;
            }
        }
        cout << count << endl ;
        for(auto i : v){
            if(i){
                cout << i*place << " " ;
            }
            place *= 10 ;
        }
        cout << endl ;
    } 
    return 0;
}