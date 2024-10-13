#include <bits/stdc++.h>
using namespace std;

string driver() {
    int n; cin >> n;
    string a, b, c; cin >> a >> b >> c;

    int i = 0;
    while(i < n) {
        if(a[i] != c[i] && b[i] != c[i]) return "YES";
        i++;
    }

    return "NO";
}


int main() {
    int t; cin >> t;
    while(t--) cout << driver() << "\n";
    return 0;
}
