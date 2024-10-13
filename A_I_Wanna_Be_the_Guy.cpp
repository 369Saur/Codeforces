#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int p , q ;
    int level ;
    vector<int> v(n , 0) ;
    cin >> p ;
    for(int i = 0 ; i < p ; i++){
        cin >> level ;
        v[level-1] = 1 ;
    }
    cin >> q ;
    for(int i = 0 ; i < q ; i++){
        cin >> level ;
        v[level-1] = 1 ;
    }
    for(int i = 0 ; i < n ; i++){
        if(v[i] == 0){
            cout << "Oh, my keyboard!" ;
            return 0 ;
        }
    }
    cout << "I become the guy." ;
    return 0;
}