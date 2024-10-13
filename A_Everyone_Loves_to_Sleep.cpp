#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ;
    while(t--){
        int n , H , M ;
        cin >> n >> H >> M ;
        int sleeping_time = H*60 + M ;
        int mini = INT_MAX ;
        for(int i = 0 ; i < n ; i++){
            int h , m ;
            cin >> h >> m ;
            int wakeup_time = h*60 + m ;
            int duration = abs(wakeup_time - sleeping_time);
            if(wakeup_time < sleeping_time){
                duration = (24*60 - duration) ;
            }
            if(duration < mini){
                mini = duration ;
            }
        }
        if(mini == 0){
            cout << 0 << " " << 0 ;
        }
        else{
            cout << mini/60 << " " << mini%60 ;
        }
        cout << endl ;
    }
    return 0;
}