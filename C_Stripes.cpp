#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        char v[8][8] ;
        for(int i = 0 ; i < 8 ; i++){
            for(int j = 0 ; j < 8 ; j++){
                cin >> v[i][j] ;
            }
        }
        int count = 0 ;
        for(int i = 0 ; i < 8 ; i++){
            count = 0 ;
            for(int j = 0 ; j < 8 ; j++){
                if(v[i][j] == 'R'){
                    count++ ;
                }
            }
            if(count == 8){
                break ;
            }
        }
        if(count == 8){
            cout << "R" ;
        }
        else{
            cout << "B" ;
        }
        cout << endl ;
    }
    return 0;
}