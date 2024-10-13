#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    sort(v.begin() , v.end()) ;
    int count = 0 ;
    int i = 0 , j = n-1 ;
    while(i <= j && j >= 0){
        while(v[j] == 4){
            count++ ;
            j-- ;
        }
        if(v[j] == 3 && v[i] == 1){
            count++ ;
            j-- ;
            i++ ;
        }
        else if(v[j] == 3 && v[i] > 1){
            count++ ;
            j-- ;
        }
        else if(v[j] == 2 && v[i] == 1){
            i++ ;
            if(v[i] == 1){
                count++ ;
                i++ ;
                j-- ;
            }
            else{
                count++ ;
                j-- ;
            }
        }
        else if(v[j] == 2 && v[i] == 2){
            count++ ;
            j-- ;
            i++ ;
        }
        else{
            count += ((j-i+1)/4) ;
            if((j-i+1)%4){
                count++ ;
            }
            break ;
        }
    }
    cout << count << endl ;    
    return 0;
}