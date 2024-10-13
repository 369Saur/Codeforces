#include<bits/stdc++.h>
using namespace std;

int driver (int **arr , int n) {
    int count = 0 , count0 = 0 , count1 = 0 ;
    int j = 0 ;
    for(int i=0 ; i<n ; i++){
        if(arr[i][j] == 0){
            count0++ ;
        }
        else{
            count1++ ;
        }
    }
    if(count0 < count1){
        count += count0 ;
    }
    else{
        count += count1 ;
    }
    j = 1 , count0 = 0 , count1 = 0 ;
    for(int i=0 ; i<n ; i++){
        if(arr[i][j] == 0){
            count0++ ;
        }
        else{
            count1++ ;
        }
    }
    if(count0 < count1){
        count += count0 ;
    }
    else{
        count += count1 ;
    }
    return count ;
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