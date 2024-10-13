#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int count = 0 ;
        int mini = INT_MIN , maxi = INT_MAX ;
        vector<vector<int>> v(n , vector<int>(2)) ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < 2 ; j++){
                cin >> v[i][j] ;
            }
        }
        sort(v.begin() , v.end()) ;
        for(int i = 0 ; i < n ; i++){
            if(v[i][0] == 1){
                if(v[i][1] > mini){
                    mini = v[i][1] ;
                }
            }
            if(v[i][0] == 2){
                if(v[i][1] < maxi){
                    maxi = v[i][1] ;
                }
            }
            if(mini != INT_MIN && maxi != INT_MAX && v[i][0] != 3 && maxi >= mini){
                count = maxi-mini+1 ;
            }
            if(v[i][0] == 3){
                if((v[i][1] >= mini) && (v[i][1] <= maxi)){
                    count-- ;
                }
            }
        }
        cout << count << endl ;
    }
    return 0;
}