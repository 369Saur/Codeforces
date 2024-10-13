#include<bits/stdc++.h>
using namespace std;

int driver (string& s) {
    int count = 0 ;
    int ptr = 1 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]-'0' == ptr){
            count++ ;
        }
        else{
            if(s[i]-'0' == 0){
                count += abs(10 - ptr) ;
                ptr = 10 ;
            }
            else{
                count += abs((s[i]-'0')-ptr) ;
                ptr = s[i] - '0' ;
            }
            count++ ;
        }
    }
    return count ;
}

int main() {
    int t; cin >> t;

    while(t--){
        string s ;
        cin >> s ;
        cout << driver(s) << endl ;
    }
    return 0;
}