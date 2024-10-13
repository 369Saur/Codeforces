#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    int mini = n-1 ;
    for(int i = 1 ; i < n-1 ; ++i){
        if(v[i-1] == v[i+1]) mini = min(mini , 1)
    }
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}

// int minElementsToRemove(vector<int>& a) { 
//     int n = a.size(); 
//     int minRemovals = n - 1; // Maximum possible removals 
     
//     for (int i = 1; i < n - 1; ++i) { 
//         if (a[i - 1] == a[i + 1]) { 
//             // If a[i-1] == a[i+1], we can remove a[i] 
//             minRemovals = min(minRemovals, 1); 
//         } 
//     } 
     
//     // Check if the first and last elements can be removed 
//     if (a[0] == a[1]) { 
//         minRemovals = min(minRemovals, 1); 
//     } 
//     if (a[n - 1] == a[n - 2]) { 
//         minRemovals = min(minRemovals, 1); 
//     } 
     
//     if (minRemovals == n - 1) { 
//         return -1; // It's not possible to make the array not beautiful 
//     } 
     
//     return minRemovals; 
// }