#include<bits/stdc++.h>
using namespace std;

string driver (string s) {
    int n = s.size() ;
    int one = 0 , two = 0 , three = 0 ;
    for(int i=0 ; i<n ; i+=2){
        if(s[i] == '1'){
            one++ ;
        }
        else if(s[i] == '2'){
            two++ ;
        }
        else{
            three++ ;
        }
    }
    for(int i=0 ; i<n ; i+=2){
        if(one){
            s[i] = '1' ;
            one-- ;
        }
        else if(two){
            s[i] = '2' ;
            two-- ;
        }
        else{
            s[i] = '3' ;
            three-- ;
        }
    }
    return s ;
}

int main() {
    string s ;
    cin >> s ;
    cout << driver(s) << endl;
    return 0;
}