#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> primes ;

void prime_no() {
    vector<bool> is_prime(111111,true) ;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= 111111; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= 111111; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= 111111; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}


int check(int n){
    int x = 1 ;
    while(n > 0){
        if((n%10==0) || (n%10==1)){
            n /= 10 ;
            continue ;
        }
        else{
            x = 0 ;
            n /= 10 ;
            break ;
        }
    }
    return x ;
}

vector<pair<int, int>> prime_fact(int n) {
    vector<pair<int, int>> factors;
    for (int prime : primes) {
        if (prime * prime > n) {
            break;
        }
        int count = 0;
        while (n % prime == 0) {
            count++;
            n /= prime;
        }
        if (count > 0) {
            factors.emplace_back(prime, count);
        }
    }
    if (n > 1) {
        factors.emplace_back(n, 1);
    }
    return factors;
}


void solve(){
    int n ; cin >> n ;
    int x = 0 ;
    x = check(n) ;
    if(x == 1) cout << "YES" << endl ;
    else{
        vector<pair<int,int>> fact = prime_fact(n) ;
        x = 1;
        for (auto factor : fact) {
            x *= check(factor.first);
        }
        if(x == 1) cout<<"YES" << endl ;
        else cout << "NO" << endl ;
    }
}

signed main() {
    prime_no();  
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}