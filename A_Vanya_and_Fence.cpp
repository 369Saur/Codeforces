#include<bits/stdc++.h>
using namespace std;

int driver (vector<int>& v , int n , int h) {
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(v[i] > h){
            count += 2 ;
        }
        else{
            count++ ;
        }
    }
    return count ;
}

int main() {
    int n , h ;
    cin >> n >> h ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    cout << driver(v , n , h) << endl ;
    return 0;
}