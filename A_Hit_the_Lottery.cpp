#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int count = 0 ;
    while(n){
        if(n >= 100){
            count++ ;
            n -= 100 ;
        }
        else if(n >= 20){
            count++ ;
            n -= 20 ;
        }
        else if(n >= 10){
            count++ ;
            n -= 10 ;
        }
        else if(n >= 5){
            count++ ;
            n -= 5 ;
        }
        else{
            count++ ;
            n -= 1 ;
        }
    }
    cout << count ;
    return 0;
}