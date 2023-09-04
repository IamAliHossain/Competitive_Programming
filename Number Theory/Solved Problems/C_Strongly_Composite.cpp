/* Problem Link: https://codeforces.com/problemset/problem/1823/C*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10 ;
bool isPrime[N];
vector<int> divisors ;

void seive(){
    isPrime[0] = isPrime[1] = 1 ;
    for(int i=2; i*i <= N; i++){
        if(isPrime[i] == 0){
            for(int j=2*i; j<N; j+=i){
                isPrime[j] = 1 ;
            }
        }
    }
}

int main(){
    int t ; t = 1;
    cin >> t ;
    while(t--){

        int n ; cin >> n ;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        map<int, int> prime_cnt;
        for(int i=0; i<n; i++){
            for(int j=2; j*j<=v[i]; j++){
                while(v[i] % j == 0){
                    v[i] /= j ;
                    prime_cnt[j]++;
                }
            }
            if(v[i] > 1){
                prime_cnt[v[i]]++;
            }
        }
        int ans = 0 , single = 0 ;
        for(auto u : prime_cnt){
            ans += u.second/2 ; ///2 ta prime num ekta composite num banay
            single += u.second%2 ; // sei composite ke strongly composite korte 1ta prime lagbe
        }
        ans += single/3 ; // total 3 ta prime 1 ta strongly composite create kore
        cout << ans << '\n';
    }
}