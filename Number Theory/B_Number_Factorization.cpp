#include"bits/stdc++.h"
using namespace std;
/*Problem Link: https://codeforces.com/contest/1787/problem/B*/

vector<int> factors(100);

int sum_of_prime_factorization(int n ){
    int cnt = 0 , mx = 0 ;
    while(n % 2 == 0){
        cnt++;
        n /= 2 ;
    }
    for(int i=0; i<cnt; i++){
        factors[i] *= 2 ;
    }
    mx = max(cnt, mx);
    cnt = 0 ;

    for(int i=3; i*i <= n; i+=2){
        while(n % i == 0){
            cnt++;
            n /= i ;
        }
        for(int j = 0 ; j <cnt; j++){
            factors[j] *= i ;
        }
        mx = max(cnt, mx);
        cnt = 0 ;
    }
    if(n > 1) factors[0] *= n ;
    
    mx = max(1, mx);
    long long sum = 0 ;
    for(auto u : factors){
        if(!mx)break;
        sum += 1LL * u ;
        mx--;
    }
    return sum ;
}

int main(){
    int t ; 
    t = 1 ;
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        for(int i=0; i<100; i++){
            factors[i] = 1 ;
        }
        cout << sum_of_prime_factorization(n) << '\n';
    }
}