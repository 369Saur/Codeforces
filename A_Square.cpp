#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        vector<vector<int>> v(4 , vector<int>(2));
        for(int i = 0 ; i < 4 ; i++){
            for(int j = 0 ; j < 2 ; j++){
                cin >> v[i][j] ;
            }
        }
        sort(v.begin() , v.end()) ;
        int x = abs(v[0][0] - v[3][0]) ;
        int y = abs(v[0][1] - v[1][1]) ;
        cout << x*y << endl ;
    }
    return 0;
}