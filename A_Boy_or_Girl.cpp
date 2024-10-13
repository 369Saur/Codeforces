#include<bits/stdc++.h>
using namespace std;

void driver (string s) {
    int n = s.size() ;
    unordered_map<char , int> mp ;
    for(int i=0 ; i<n ; i++){
        mp[s[i]]++ ;
    }
    if(mp.size() % 2 == 0){
        cout << "CHAT WITH HER!" ;
    }
    else{
        cout << "IGNORE HIM!" ;
    }
}

int main() {
    string s ;
    cin >> s ;
    driver(s) ;
    return 0;
}