#include<bits/stdc++.h>
using namespace std;

int driver (int a , int b) {
    int count = 0 ;
    while(a <= b){
        count++ ;
        a *= 3 ;
        b *= 2 ;
    }
    return count ;
}

int main() {
    int a , b ;
    cin >> a >> b ;
    cout << driver(a , b) << endl;
    return 0;
}