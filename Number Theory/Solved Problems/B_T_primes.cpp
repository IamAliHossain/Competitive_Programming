#include<bits/stdc++.h>
using namespace std;

const int ln = 1e6+10 ;

long long isPrime[ln];


int main(){
    
    int N = 1e6+10 ;
    isPrime[0] = isPrime[1] = 1 ;
    for(int i=2; i*i<=N; i++){
        if(isPrime[i] == 0){
            for(int j = 2*i; j<=N; j+=i){
                isPrime[j] = 1 ;
            }
        }
    }

    int n ; cin >> n ;
    for(int i=0; i<n; i++){
        long long x ; cin >> x ;
        long long root = sqrt(x) ;
        
        if(root * root == x){
            if(isPrime[root]==0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}