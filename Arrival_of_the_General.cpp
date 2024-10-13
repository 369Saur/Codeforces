#include<bits/stdc++.h>
using namespace std;

int driver (vector<int> &v , int n) {
    int count = 0 ;
    int mini = v[0] , minidx = 1 ;
    int maxi = v[0] , maxidx = 1 ;
    for(int i=1 ; i<n ; i++){
        if(v[i] <= mini){
            mini = v[i] ;
            minidx = i+1 ;
        }
        else if(v[i] > maxi){
            maxi = v[i] ;
            maxidx = i+1 ;
        }
    }
    if(maxidx <  minidx){
        count += (maxidx - 1) ;
        count += (n - minidx) ;
    }
    else if(maxidx >  minidx){
        count += (maxidx - 1) ;
        count += (n - minidx) ;
        count-- ;
    }
    return count ;
}

int main() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for(int i=0 ; i<n ; i++){
        cin >> v[i] ;
    }
    cout << driver(v , n) << endl;
    return 0;
}