#include"bits/stdc++.h"
using namespace std;

const int N = 1e7+10;
bool is_prime[N];

void sieve(int n){
    is_prime[0] = is_prime[1] = 1 ;
    /*The most efficient way, Time Complexity = sqrt(n)*log*log(n) */
    for(int i=2; i<=N; i+=2){
        is_prime[i] = 1 ;
    }
    is_prime[2] = 0 ;
    for(int i=3; i*i<N; i+=2){
        if(is_prime[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                is_prime[j] = 1 ;
            }
        }
    }
    
    /* Another approach of seive */

    for(int i=2; i<N; i++){
        if(is_prime[i] == 0){
            for(int j=2*i ; j<N; j+=i){
                is_prime[j] = 1 ;
            }
        }
    }
}

int main(){
    /*It will say whether n is prime or not. 0-> prime else not prime*/
    int q ; cin >> q ;
    while(q--){
        int n; cin >> n ;
        sieve(n);
        cout << is_prime[n] << '\n';
    }
    
}