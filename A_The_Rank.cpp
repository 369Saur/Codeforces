#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    int thomas = a + b + c + d ;
    int count = 1 , sum = 0 ;
    while(n > 1){
        cin >> a >> b >> c >> d ;
        sum = a + b + c + d ;
        if(sum > thomas){
            count++ ;
        }
        n-- ;
    }
    cout << count ;
    return 0;
}