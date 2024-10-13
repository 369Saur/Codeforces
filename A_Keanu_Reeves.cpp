#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    int count0 = 0 , count1 = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '0') count0++ ;
        else count1++ ;
    }
    if(count0 != count1){
        cout << 1 << endl ;
        cout << s ;
        return ;
    }
    int zero = 0 , one = 0 ;
    int j = n-1 ;
    while(j > 0 ){
        if(s[j] == '0'){
            count0-- ;
            zero++ ;
        }
        else{
            count1-- ;
            one++ ;
        }
        if((count0 != count1) && (zero != one)){
            break ;
        }
        j-- ;
    }
    cout << 2 << endl ;
    cout << s.substr(0,j) << " " << s.substr(j,n-j) ;
}

signed main() {
    solve() ;
    return 0;
}