#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    string st ;
    cin >> st ;
    int s = 0 , f = 0 ;
    for(int i = 0 ; i < n-1  ; i++){
        if(st[i] != st[i+1]){
            if(st[i+1] == 'S'){
                s++ ;
            }
            else{
                f++ ;
            }
        }
    }
    if(f > s){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
    return 0;
}