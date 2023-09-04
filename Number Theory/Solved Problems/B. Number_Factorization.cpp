/* Problem Link : https://codeforces.com/contest/1787/problem/B*/

#include"bits/stdc++.h"
using namespace std;

vector<int> factors(100005);

void primeFactorization(int n){
    int mx = 0, tem = 0;
    int cnt = 0 ;
    while(n % 2 == 0){
        n/=2 ;
        cnt ++;
    }
    for(int i=0; i<cnt; i++){
        factors[i] *= 2;
    }
    mx = max(cnt, mx);
    cnt = 0 ;
    for(int i=3; i<=sqrt(n); i+=2){
        // m = n ;
        cnt = 0 ;
        if(n % i == 0){
            while(n % i == 0){
                cnt++;
                n/=i;
            }
        }
        for(int j=0; j<cnt; j++){
            factors[j] *= i;
        }
        mx = max(cnt, mx);
        tem = cnt;
    }
    if(n > 2){
        mx = max(1, mx);
        for(int i=0; i<1; i++){
            factors[i] *= n;
        }
    }
    long long sum = 0 ;
    
    for(int i=0; i<mx; i++){
        sum += factors[i];
    }
    cout << sum << endl;

}

int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n;
        for(int i=0; i<=100000; i++){
            factors[i] = 1 ;
        }
        primeFactorization(n);
    }
}