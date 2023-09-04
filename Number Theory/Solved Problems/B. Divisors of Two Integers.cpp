/* Problem Link : https://codeforces.com/problemset/problem/1108/B*/

#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n ; cin >> n ;
    int a[n+10];
    
    multiset<int> divisors;
    for(int i=0; i<n; i++){
        cin >> a[i];
        divisors.insert(a[i]);
    }
    sort(a, a+n);
    int x = a[n-1];
    
    for(int i=1; i*i<= x ; i++){
        if(x % i == 0){
            divisors.erase(divisors.find(i));
            if(x/i != i){
                divisors.erase(divisors.find(x/i));
            }
        }
    }
    int y = *prev(divisors.end()) ;
    
    
    cout << x << ' ' << y << '\n';
    
    
    // divisors.clear();
    // for(auto u : divisors){
    //     cout << u << ' ';
    // }
}