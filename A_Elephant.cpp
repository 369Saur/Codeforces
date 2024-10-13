#include<bits/stdc++.h>
using namespace std;

int driver(int x){
    int count = 0 ;
    count = x / 5 ;
    if(x % 5 == 0){
        return count ;
    }
    return count + 1 ;
}

int main() {
    int x ;
    cin >> x ;
    cout << driver(x) << endl ;
    return 0;
}