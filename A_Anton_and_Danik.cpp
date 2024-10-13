#include<bits/stdc++.h>
using namespace std;

string driver (string& s , int n) {
    int A = 0 , D = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'A'){
            A++ ;
        }
        else{
            D++ ;
        }
    }
    if(A > D){
        return "Anton" ;
    }
    else if(A < D){
        return "Danik" ;
    }
    else{
        return "Friendship" ;
    }
}

int main() {
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    cout << driver(s , n) << endl;
    return 0;
}