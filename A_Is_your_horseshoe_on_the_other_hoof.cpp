#include<bits/stdc++.h>
using namespace std;

int driver (int* arr) {
    sort(arr , arr+4) ;
    int count = 0 ;
    for(int i=1 ; i<4 ; i++){
        if(arr[i-1] == arr[i]){
            count++ ;
        }
    }
    return count ;
}

int main() {
    int arr[4] ;
    for(int i=0 ; i<4 ; i++){
        cin >> arr[i] ; 
    }
    cout << driver(arr) << endl;
    return 0;
}