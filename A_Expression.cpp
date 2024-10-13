#include<bits/stdc++.h>
using namespace std;

int solve(int a , int b , int c){
    int maxi = -1 ;
    maxi = max(maxi , a+b+c) ;
    maxi = max(maxi , a*b*c) ;
    maxi = max(maxi , (a+b)*c) ;
    maxi = max(maxi , a*(b+c)) ;
    maxi = max(maxi , a+b*c) ;
    maxi = max(maxi , a*b+c) ;
    return maxi ;
}

int main() {
    int a , b , c ;
    cin >> a >> b >> c ;
    cout << solve(a , b , c) ;
    return 0;
}