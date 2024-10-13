#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./" ;
    char ch ;
    cin >> ch ;
    string mole ;
    cin >> mole ;
    if(ch == 'L'){
        for(int i = 0 ; i < mole.size() ; i++){
            for(int j = 0 ; j < s.size() ; j++){
                if(mole[i] == s[j]){
                    cout << s[j+1] ;
                }
            }
        }
    }
    else{
        for(int i = 0 ; i < mole.size() ; i++){
            for(int j = 0 ; j < s.size() ; j++){
                if(mole[i] == s[j]){
                    cout << s[j-1] ;
                }
            }
        }
    }
    return 0;
}