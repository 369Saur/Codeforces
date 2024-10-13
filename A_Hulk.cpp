#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int count = 0 ;
    while(n--){
        count++ ;
        if(count % 2){
            cout << "I hate " ;
        }
        else{
            cout << "I love " ;
        }
        if(n != 0){
            cout << "that " ;
        }
        else{
            cout << "it " ;
        }
    }
    return 0;
}