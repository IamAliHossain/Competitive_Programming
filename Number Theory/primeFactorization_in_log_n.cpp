#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10 ;
bool is_prime[N];
vector<int> low_prime(N), high_prime(N);

int main(){
    is_prime[0] = is_prime[1] = 1 ;
    for(int i=2; i<N; i++){
        if(is_prime[i] == 0){
            low_prime[i] = high_prime[i] = i ;
            for(int j = 2*i; j<N; j+=i){
                is_prime[j] = 1 ;
                high_prime[j] = i ;
                if(low_prime[j] == 0){
                    low_prime[j] = i ;
                }
            }
        }
    }
    
    /* Time Complexity is log(num)*/
    int num ; cin >> num ;
    cout << low_prime[num] << ' ' << high_prime[num] << '\n';
    vector<int> prime_factor ;
    while(num > 1){
        int factor = high_prime[num] ;
        while(num % factor == 0){
            num /= factor ;
            prime_factor.push_back(factor);
        }
    }
    for(auto u : prime_factor){
        cout << u << ' ';
    }cout << '\n';
    
    
}