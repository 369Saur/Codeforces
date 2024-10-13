#include<bits/stdc++.h>
using namespace std;

int driver (int** arr , int n) {
    int count = 0 ;
    int maxi = 0 ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<2 ; j++){
            if(j == 0){
                count -= arr[i][j] ;
            }
            else{
                count += arr[i][j] ;
            }
            maxi = max(maxi , count) ;
        }
    }
    return maxi ;
}

int main() {
    int n ; 
    cin >> n ;
    int** arr = new int*[n] ;
    for(int i=0 ; i<n ; i++){
        arr[i] = new int[2] ;
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<2 ; j++){
            cin >> arr[i][j] ;
        }
    }
    cout << driver(arr , n) << endl;
    return 0;
}