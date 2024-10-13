#include<bits/stdc++.h>
using namespace std;

string driver (string s1 , string s2) {
    int n = s1.size() ;
    string ans ;
    int i = 0 ;
    while(i < n){
        if(s1[i] == s2[i]){
            ans += '0' ;
        }
        else{
            ans += '1' ;
        }
        i++ ;
    }
    return ans ;
}

int main() {
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    cout << driver(s1 , s2) << endl;
    return 0;
}