#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; 
    cin >> n ;
    vector<string> s(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> s[i] ;
        cout << endl ;
    }
    int faces = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == "Icosahedron"){
            faces += 20 ;
        }
        else if(s[i] == "Dodecahedron"){
            faces += 12 ;
        }
        else if(s[i] == "Octahedron"){
            faces += 8 ;
        }
        else if(s[i] == "Cube"){
            faces += 6 ;
        }
        else{
            faces += 4 ;
        }
    }
    cout << faces ;
    return 0;
}