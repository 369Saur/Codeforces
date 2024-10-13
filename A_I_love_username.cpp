#include<bits/stdc++.h>
using namespace std;

int driver (int* arr , int n) {
    int count = 0 ;
    int max = arr[0] ;
    int min = arr[0] ;
    for(int i=1 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i] ;
            count++ ;
        }
        else if(arr[i] < min){
            min = arr[i] ;
            count++ ;
        }
    }
    return count ;
}

int main() {
    int n ;
    cin >> n ;
    int* arr = new int[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    cout << driver(arr , n) << endl;
    return 0;
}