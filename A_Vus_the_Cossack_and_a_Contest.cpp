#include<bits/stdc++.h>
using namespace std;

int main() {
    int n , m , k ;
    cin >> n >> m >> k ;
    int mini = min(m , k) ;
    if(mini >= n){
        cout << "Yes" ;
    }
    else{
        cout << "No" ;
    }
    return 0;
}