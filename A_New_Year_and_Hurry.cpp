#include<bits/stdc++.h>
using namespace std;

int main() {
    int n , k ;
    cin >> n >> k ;
    int count = 0 ;
    for(int i = 1 ; i <= n ; i++){
        k += 5*i ;
        if(k > 240){
            break ;
        }
        count++ ;
    }
    cout << count ;
    return 0;
}