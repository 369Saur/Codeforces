#include<bits/stdc++.h>
using namespace std;

bool is_valley(vector<int>& v , int i , int j , int n){
    if(i != 0 && v[i-1] <= v[i]) return false ;
    if(j != n-1 && v[j+1] <= v[j]) return false ;
    if(v[i] != v[j]) return false ;
    return true ;
}

int driver(vector<int>& v , int n){
    int i = 0 , j = 0 ;
    int count = 0 ;
    while(j < n && i <= j){
        if(is_valley(v,i,j,n)){
            if(count){
                return 0 ;
            }
            count++ ;
        }
        if(v[i] != v[j]){
            i++ ;
        }
        else{
            j++ ;
        }
    }
}

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    if(driver(v,n)){
        cout << "YES" << endl ;
    }
    else{
        cout << "NO" << endl ;
    }
}

int main() {
    int t ; cin >> t ;
    while(t--){
        solve() ;
    }
    return 0;
}