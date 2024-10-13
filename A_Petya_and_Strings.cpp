#include<bits/stdc++.h>
using namespace std;

int driver (string s1 , string s2) {
    int n = s1.size() ;
    for(int i = 0 ; i < n ; i++){
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] += 32 ;
        }
        if(s2[i] >= 'A' && s2[i] <= 'Z'){
            s2[i] += 32 ;
        }
    }
    if(s1 > s2){
        return 1 ;
    }
    else if(s1 < s2){
        return -1 ;
    }
    else{
        return 0 ;
    }
}

int main() {
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    cout << driver(s1 , s2) << endl;
    return 0;
}