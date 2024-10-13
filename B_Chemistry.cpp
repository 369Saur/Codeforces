#include<bits/stdc++.h>
using namespace std;

void driver (string& str1 , int n , int k) {
    sort(str1.begin() , str1.end()) ;
    vector<int> v ;
    int count = 1 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == s[i+1]){
            count++ ;
        }
        else{
            v.push_back(count) ;
            count = 1 ;
        }
    }
    int even = 0 , odd = 0 ;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] % 2){
            odd++ ;
        }
        else{
            even++ ;
        }
    }
    if(k % 2 == 0 && odd)
}

int main() {
    int t; cin >> t;

    while(t--){
        int n , k ;
        cin >> n >> k ;
        string str1 ;
        cin >> str1 ;
        driver(str1 , n , k) ;
        cout << endl ;
    }
    return 0;
}