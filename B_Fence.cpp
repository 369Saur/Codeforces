#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n , k ;
    cin >> n >> k ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    int i = 0 , j = 0 , l = 0 ;
    int sum = 0 , mini = INT_MAX ;
    while(j < n){
        sum += v[j] ;
        if(j-i+1 < k){
            j++ ;
        }
        else{
            if(sum < mini){
                mini = sum ;
                l = i ;
            }
            sum -= v[i] ;
            i++ ;
            j++ ;
        }
    }
    cout << l+1 ;
    return 0;
}