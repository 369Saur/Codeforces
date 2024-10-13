#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    int count = 1 , maxi = 1 ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    for(int i = 1 ; i < n ; i++){
        if(v[i] >= v[i-1]){
            count++ ;
            if(count > maxi){
                maxi = count ;
            }
        }
        else{
            count = 1 ;
        }
    }
    cout << maxi ;
    return 0;
}