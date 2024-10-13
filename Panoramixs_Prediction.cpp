#include<bits/stdc++.h>
using namespace std;

void driver (int n , int m) {
    int i = n+1 ; 
    int prime = 0 ; 
    int flag = 0 ;
    while(i <= m){
        flag = 0 ;
        for(int j=2 ; j<=i/2 ; j++){
            if(i % j == 0){
                flag = 1 ;
                break ;
            }
        }
        if(flag == 0){
            prime = 1 ;
            break ;
        }
        i++ ;
    }
    if(i==m && prime){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
}

int main() {
    int n , m ;
    cin >> n >> m ;
    driver(n,m) ;
    return 0;
}