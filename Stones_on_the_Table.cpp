#include<bits/stdc++.h>
using namespace std;

int driver (int n , string s) {
    int count = 0 ;
    for(int i=1 ; i<n ; i++){
        if(s[i] == s[i-1]){
            count++ ;
        }
    }
    return count ;
}

int main() {
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    cout << driver(n , s) << endl;
    return 0;
}