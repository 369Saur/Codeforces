#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> stone = {"Power" , "Time" , "Space" , "Soul" , "Reality" , "Mind"} ;
    vector<string> color = {"purple" , "green" , "blue" , "orange" , "red" , "yellow"} ;
    int n ;
    cin >> n ;
    vector<int> v(6 , 0) ;
    string s ;
    for(int i = 0 ; i < n ; i++){
        cin >> s ;
        for(int j = 0 ; j < 6 ; j++){
            if(s == color[j]){
                v[j] = 1 ;
            }
        }
    }
    cout << 6-n << endl ;
    for(int i = 0 ; i < 6 ; i++){
        if(v[i] == 0){
            cout << stone[i] << endl ;
        }
    }
    return 0;
}