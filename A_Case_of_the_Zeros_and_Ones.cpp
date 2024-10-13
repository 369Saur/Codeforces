#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    char x ;
    int count1 = 0 , count0 = 0 ;
    for(int i = 1 ; i <= n ; i++){
        cin >> x ;
        if(x-'0'){
            count1++ ;
        }
        else{
            count0++ ;
        }
    }
    return abs(count1-count0) ;
}

int main() {
    int n ;
    cin >> n ;
    cout << solve(n) ;
    return 0;
}