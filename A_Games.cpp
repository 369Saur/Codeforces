#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int v[n][2] ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> v[i][j] ;
        }
    }
    vector<int> map(101 , 0) ;
    for(int i = 0 ; i < n ; i++){
        map[v[i][0]]++ ;
    }
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        count += map[v[i][1]] ;
    }
    cout << count << endl ;
    return 0;
}