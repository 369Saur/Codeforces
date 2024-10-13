#include<bits/stdc++.h>
using namespace std;

int solve(int x){
    int count = 1 ;
    while(x & (x-1)){
        if(x % 2){
            count++ ;
            x-- ;
        }
        else{
            x /= 2 ;
        }
    }
    return count ;
}

int main() {
    int x ; 
    cin >> x ;
    cout << solve(x) ;
    return 0;
}