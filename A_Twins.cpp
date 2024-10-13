#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    int total = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        total += v[i] ;
    }
    sort(v.begin() , v.end() , greater<int>()) ;
    int sum = 0 , count = 0 ;
    for(int i = 0 ; i < n ; i++){
        count++ ;
        sum += v[i] ;
        if(sum > total-sum){
            break ;
        }
    }
    cout << count ;
    return 0;
}