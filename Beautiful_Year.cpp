#include<bits/stdc++.h>
using namespace std ;

int Beautiful_Year(int year){
    while(1){
        year++ ;
        int a = year/1000 ;
        int b = year/100 % 10 ;
        int c = year/10 % 10 ;
        int d = year%10 ;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break ;
        }
    }
    return year ;
}

int main(){
    int year ;
    cin >> year ;
    cout << Beautiful_Year(year) ;
    return 0 ;
}