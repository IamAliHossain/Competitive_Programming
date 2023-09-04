/*
Problem Link : https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/

Problem
Here is another task for you, prepared by Monk himself. So, this is how it goes :

Given an integer array A of size N, Monk needs you to answer T queries for him.
In each query, he gives you 2 integers P and Q. In response to each of these queries,
you need to tell Monk the count of numbers in array A. 
that are either divisible by P, Q, or both.

Can you cope with this ?
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
int frequency[N];
int multiple_cnt[N];

int main(){
    int n ; cin >> n ;
    int a[n+4];
    for(int i=0; i<n; i++){
        cin >> a[i] ;
        frequency[a[i]]++;
    }
    for(int i=1; i<N; i++){
        for(int j = i ; j<N; j+=i){ /*j hocche i er multiple ekhane */
            multiple_cnt[i] += frequency[j]; /* frequency neya hoyeche sudhu given array er multples count korte*/
        }
    }
    // for(int i=0; i<n; i++){
    //     cout << multiple_cnt[a[i]] << ' ';
    // }
    
    int t ;cin >> t ;
    while(t--){
        int p, q ; cin >> p >> q ;
        int ans = multiple_cnt[p] + multiple_cnt[q];
        /*p and q er both multiple thakte pare tai p,q er LCM baad dite hobe */
        long long LCM = 1LL * p * q / __gcd(p, q);
        if(LCM < N){ /*lcm N er boro howa possible na eihane */
            ans -= multiple_cnt[LCM]; /*so jodi hoy LCM <N true hoy taile baad*/
        }
        cout << ans << '\n';
    }
    // for(int i=0; i<n; i++){
    //     cout << frequency[a[i]] << ' ';
    // }
}
