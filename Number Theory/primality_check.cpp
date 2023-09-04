#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

int prime[N];
int is_prime[N]; // 0 means initially all prime

int main(){
    
    /*seive of erathones*/
    int n = 1e7 ;
    is_prime[0] = is_prime[1] = 1 ;
    for(int i=2; i<=n; i+=2){
        if(is_prime[i] == 0){
            is_prime[i] = 1 ;
        }
    }
    is_prime[2] = 0 ;
    for(int i=3; i*i<n; i+=2){
        if(is_prime[i] == 0){
            for(int j=i*i; j<n; j+=i){
                is_prime[j] = 1  ;
            }
        }
    }
    /*Q queries to check x is prime or not 0(10^7)*/
    int q ; cin >> q ;
    while(q--){
        int x ; cin >> x ;
        if(is_prime[x] == 0){
            cout << "Prime" << '\n';
        }
        else{
            cout << "Not Prime" << '\n';
        }
        
    }
    
    /* Time complexity of this code

        1) for outer loop which genarate primes by seive
            sqrt(n)* {n/2 + n/3 + n/5 + n/7 + n/9 ...}
            mul
            = sqrt(n) * log((log(n)))  

        2) for Q queries time complexity 
            =0(Q) * 0(1) 
            0(1) cause amra agei seive diye prime er array create
            kore rekhechi so is_prime[x] call korlei number er status
            peye jachhi
        
    */
    
    

}