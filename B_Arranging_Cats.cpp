#include<bits/stdc++.h>
using namespace std;

int solve(string s , string f , int n){
    int count1 = 0 , count2 = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1'){
            count1++ ;
        }
        if(f[i] == '1'){
            count2++ ;
        }
    }
    int ans = 0 ;
    if(count1 > count2){
        ans += (count1 - count2) ;
        for(int i = 0 ; i < n ; i++){
            if(f[i] == '1' && s[i] == '0'){
                ans++ ;
            }
        }
    }
    else if(count1 == count2){
        for(int i = 0 ; i < n ; i++){
            if(f[i] == '1' && s[i] == '0'){
                ans++ ;
            }
        }
    }
    else{
        ans += count2 - count1 ;
        int x = count2 - count1 ;
        for(int i = 0 ; i < n ; i++){
            if(f[i] == '1' && s[i] == '0'){
                if(x == 0){
                    ans++ ;
                }
                else{
                    x-- ;
                }
            }
        }
    }
    return ans ;
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        string f ;
        cin >> f ;
        cout << solve(s , f , n) << endl ;
    }
    return 0;
}