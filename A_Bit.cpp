#include<bits/stdc++.h>
using namespace std;

int driver (vector<string>& v , int n) {
    int count = 0 ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            if(v[i][j] == '+'){
                count++ ;
                break ;
            }
            else if(v[i][j] == '-'){
                count-- ;
                break ;
            }
            else{
                continue ;
            }
        }
    }
    return count ;
}

int main() {
    int n ; 
    cin >> n ;
    vector<string> v(n) ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> v[i][j] ;
        }
    }
    cout << driver(v , n) << endl;
    return 0;
}