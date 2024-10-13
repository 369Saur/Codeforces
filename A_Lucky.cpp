#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        int sum1 = 0 , sum2 = 0 ;
        int i = 0 , j = 5 ;
        while(i < j){
            sum1 += (s[i++] - '0') ;
            sum2 += (s[j--] - '0') ;
        }
        if(sum1 == sum2){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
    }
    return 0;
}