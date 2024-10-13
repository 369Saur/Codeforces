#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; 
    cin >> n ; 
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int flag = 0 ;
    for(auto i : v){
        if(i == 1){
            flag = 1 ;
            break ;
        }
    }
    if(flag == 0){
        cout << "EASY" ;
    }
    else{
        cout << "HARD" ;
    }
    return 0;
}