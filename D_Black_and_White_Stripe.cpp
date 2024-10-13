#include<bits/stdc++.h>
using namespace std;

long long solve(long long n, long long k, string s){
    long long i = 0 , j = 0 ;
    long long count = 0 , mini = n ;
    while(j < n){
        if(j-i+1 < k){
            if(s[j] == 'B'){
                count++ ;
            }
        }
        else{
            if(s[j] == 'B'){
                count++ ;
            }
            mini = min(mini , k-count) ;
            if(mini == 0){
                return mini ;
            }
            if(s[i] == 'B'){
                count-- ;
            }
            i++ ;
        }
        j++ ;
    }
    return mini ;
}

int main() {
    int t ;
    cin >> t ;
    while(t--)
    {
        long long n , k ;
        cin >> n >> k ;
        string s ;
        cin >> s ;
        cout << solve(n, k, s) << endl ;
    }
    
    return 0;
}