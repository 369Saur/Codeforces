#include<bits/stdc++.h>
using namespace std;

void driver (int* arr , int n) {
    for(int i=0 ; i<n-1 ; i+=2){
        swap(arr[i] , arr[i+1]) ;
    }
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }
}

int main() {
    int n ;
    cin >> n ;
    if(n % 2 != 0){
        cout << -1 ;
        return 0 ;
    }
    int* arr = new int[n] ;
    for(int i=0 ; i<n ; i++){
        arr[i] = i+1 ;
    }
    driver(arr,n) ;
    return 0;
}