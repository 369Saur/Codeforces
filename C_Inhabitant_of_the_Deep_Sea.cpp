#include<bits/stdc++.h>
using namespace std;
#define int long long

#include <bits/stdc++.h>

int main()
{
    int n ; cin >> n ;
    vector<vector<int>> v(n,vector<int>(2)) ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> v[i][j] ;
        }
    }
    int wait = v[0][1] ;
    int end = v[0][0]+v[0][1] ;
    for(int i = 1 ; i < n ; i++){
        end += v[i][1] ;
        wait += (end-v[i][0]) ;
    }
    cout << wait/n << endl ;
    return 0;
}