#include<bits/stdc++.h>
using namespace std;

string driver(vector<int>& v , int n){
    if(n == 2){
        return "Yes" ;
    }
    unordered_map<int , int> mp ;
    for(int i = 0 ; i < n ; i++){
        mp[v[i]]++ ;
    }
    if(mp.size() > 2){
        return "No" ;
    }
    sort(v.begin() , v.end()) ;
    if(v[0] == v[n-1]){
        return "Yes" ;
    }
    int count1 = 1 , count2 = 1 ;
    for(int i = 1 ; i < n ; i++){
        if(v[i] == v[i-1]){
            count2++ ;
        }
        else{
            break ;
        }
    }
    for(int i = n-2 ; i >= 0 ; i--){
        if(v[i] == v[i+1]){
            count1++ ;
        }
        else{
            break ;
        }
    }
    if(count1 == count2 || abs(count1 - count2) == 1){
        return "Yes" ;
    }
    else{
        return "No" ;
    }
}

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        cout << driver(v , n) << endl ;
    }
    
    return 0;
}