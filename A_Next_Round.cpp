#include<bits/stdc++.h>
using namespace std;

int driver(vector<int>& v , int n , int k){
    int x = v[k-1] ;
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(v[i] >= x && v[i] > 0){
            count++ ;
        }
        else{
            break ;
        }
    }
    return count ;
}

int main() {
    int n , k ;
    cin >> n >> k ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    cout << driver(v , n , k) << endl ;
    return 0;
}