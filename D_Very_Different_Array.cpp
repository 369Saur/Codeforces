#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        long long n , m ;
        cin >> n >> m ;
        vector<int> a(n) ;
        vector<int> b(m) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        for(int i = 0 ; i < m ; i++){
            cin >> b[i] ;
        }
        sort(a.begin() , a.end()) ;
        sort(b.begin() , b.end()) ;
        long long count = 0 ;
        int i = 0 , j = n-1 , k = 0 , l = m-1 ;
        while(i <= j){
            int v = abs(a[i] - b[l]) ;
            int x = abs(a[i] - b[k]) ;
            int y = abs(a[j] - b[l]) ;
            int z = abs(a[j] - b[k]) ;
            if(v > x && v > y && v > z){
                count += v ;
                i++ ;
                l-- ;
            }
            else if(x > y && x > z){
                count += x ;
                i++ ;
                k++ ;
            }
            else if(y > z){
                count += y ;
                j-- ;
                l-- ;
            }
            else{
                count += z ;
                j-- ;
                k++ ;
            }
        }
        cout << count << endl ;
    }
    return 0;
}