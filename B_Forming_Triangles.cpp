#include<bits/stdc++.h>
using namespace std;

void driver(){
    long long n ;
    cin >> n ;
    long long len ;
    map<long long , long long> mp ;
    for(int i = 0 ; i < n ; i++){
        cin >> len ;
        mp[len]++ ;
    }
    long long count = 0 ;
    long long ans = 0 ;
    for(auto &i : mp){
        if(i.second >= 3){
            ans += (i.second*(i.second-1)*(i.second-2))/6 ;
        }
        if(i.second >= 2){
            ans +=((i.second*(i.second-1))/2)*count ;
        }
        count += i.second ;
    }
    cout << ans ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        driver() ;
        cout << endl ;
    }
    return 0;
}