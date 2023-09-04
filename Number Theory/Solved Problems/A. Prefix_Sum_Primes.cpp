
/* Problem Link : https://codeforces.com/contest/1149/problem/A*/
#include<bits/stdc++.h>
using namespace std ;

const int N = 4e7+10;
bool isPrime[N] ;

int main(){

    isPrime[0] = isPrime[1] = 1 ;
    for(int i=2; i*i<N; i++){
        if(isPrime[i] == 0){
            for(int j= 2*i; j<N; j+=i){
                isPrime[j] = 1 ;
            }
        }
    }
    
    int n ; cin >> n ;
    vector<int> v(n);
    int on = 0 , tw = 0  ;
    
    for(int i=0; i<n; i++){
        int a ; cin >> a ;
        v.push_back(a);
        
        if(a == 1){
            on++;
        }
        else tw++;
    }
    if(on ==0 or tw == 0){
        for(auto u : v){
            cout << u << ' ';
        }
        cout << '\n';
        return 0;
    }
    cout << "2 1";
    for(int i=1; i<tw; i++){
        cout << 2 << ' ';
    }
    for(int i=1; i<on; i++){
        cout << 1 << ' ';
    }
    cout << '\n';
    
    // int now = 0 ;
    
    // for(int i=1; i<=n; i++){
    //     if(isPrime[now+1] == 0 and on){
    //         cout << 1 << ' ';
    //         now += 1 ;
    //         on--;
    //     }
    //     else if(isPrime[now+2] == 0 and tw){
    //         cout << 2 << ' ';
    //         now += 2 ;
    //         tw--;
    //     }
    //     else {
    //         if(on){
    //             cout << 1 << ' ';
    //             now+=1;
    //             on--;
    //         }
    //         else{
    //             now += 2 ;
    //             cout << 2 << ' ';
    //             tw--;
    //         }
            
    //     }
    // }
    // cout << isPrime[4000101] << '\n';

}