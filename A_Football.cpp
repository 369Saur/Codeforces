#include<bits/stdc++.h>
using namespace std;

string solve(int n){

    string s ;
    unordered_map<string , int> mp ;
    while(n--){
        cin >> s ;
        mp[s]++ ;
    }
    int max = -1 ;
    for(auto &i : mp){
        if(i.second > max){
            max = i.second ;
            s = i.first ;
        }
    }
    return s ;
}

int main() {
    int n ;
    cin >> n ;
    cout << solve(n) ;
    return 0;
}