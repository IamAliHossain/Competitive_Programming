
/* Problem Link : https://codeforces.com/problemset/problem/1076/B*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
bool isPrime[N];
vector<int> low_prime(N), high_prime(N);

void seive(){
    isPrime[0] = isPrime[1] = 1 ;
    for(int i=2; i*i<=N; i++){
        if(isPrime[i] == 0){
            low_prime[i] = high_prime[i] = i ;
            for(int j=2*i; j<=N; j+=i){
                high_prime[j] = i;
                isPrime[j] = 1 ;
                if(low_prime[j] == 0){
                    low_prime[j] = i;
                }
            }
        }
    }
}



int main(){
    
    long long n ; cin >> n ;
    long long ans ;
    if(n % 2 == 0){
       ans = n/2;
       cout << ans << '\n';
       return 0 ;
    }


    for(long long i=2; i*i<=n; i++){
        if(n % i == 0){
            long long divisor = i ;
            ans = 1LL + (n-divisor)/2 ;
            cout << ans << '\n';
            return 0;
        }
    
    }
    cout << 1 << '\n';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){

    //     }
    // }
    
}