#include<bits/stdc++.h>
using namespace std;

int driver (int** arr , int n) {
    int ans = 0 ;
    for(int i=0 ; i<n ; i++){
        int count = 0 ;
        for(int j=0 ; j<3 ; j++){
            if(arr[i][j] == 1){
                count++ ;
            }
        }
        if(count >= 2){
            ans++ ;
        }
    }
    return ans ;
}

int main() {
    int n ;
    cin >> n ;
    int** arr = new int*[n] ;
    for(int i=0 ; i<n ; i++){
        arr[i] = new int[3] ; 
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> arr[i][j] ;
        }
    }
    cout << driver(arr , n) << endl;
    return 0;
}