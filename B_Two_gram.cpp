#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    unordered_map<string , int> mp ;
    for(int j = 1 ; j < n ; j++){
        mp[s.substr(j-1,2)]++ ;
    }
    int maxi = -1 ;
    string ans = "" ;
    for(auto i : mp){
        if(i.second > maxi){
            maxi = i.second ;
            ans = i.first ;
        }
    }
    cout << ans ;
    return 0;
}