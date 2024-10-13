#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s ; cin >> s ;
    int p ; cin >> p ;
    int n = s.size() ;
    string temp = s ;
    sort(temp.begin() , temp.end()) ;
    vector<int> v(26 , 0) ;
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        v[s[i]-'a']++ ;
        sum += (s[i]-'a'+1) ;
    }
    if(sum <= p){
        cout << s << endl ;
        return ;
    }
    for(int i = n-1 ; i >= 0 ; i--){
        sum -= (temp[i]-'a'+1) ;
        v[temp[i]-'a']-- ;
        if(sum <= p){
            break ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(v[s[i]-'a'] > 0){
            cout << s[i] ;
            v[s[i]-'a']-- ;
        }
    }
    cout << endl ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        solve() ;
    }
    return 0;
}