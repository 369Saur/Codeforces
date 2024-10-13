#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        set<char> st ;
        int count = 0 ;
        for(int i = 0 ; i < n ; i++){
            st.insert(s[i]) ;
            count += st.size() ;
        }
        cout << count << endl ;
    }
    return 0;
}