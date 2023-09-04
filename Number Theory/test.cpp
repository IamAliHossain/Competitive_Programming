
/*this is to test each code ^_^*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
bool is_prime[N];
vector<int> low_prime(N, 0), high_prime(N, 0);

int main(){
    /* seive to store all prime info */
    is_prime[0] = is_prime[1] = 1 ;
    for(int i=2; i<= N; i+=2){
        is_prime[i] = 1 ;
        low_prime[i] = 2 ;
        high_prime[i] = 2 ;
    }
    is_prime[2] = 0 ;
    for(int i=3; i*i <= N; i+=2){
        if(is_prime[i] == 0){
            for(int j=2*i; j<N; j+=i){
                is_prime[j] = 1 ;
                high_prime[j] = i ;
                if(low_prime[j] == 0){
                    low_prime[j] = i ;
                }

            }
        }
    }
    // for(int i=1; i<=100; i++){
    //     cout << low_prime[i] << ' ' << high_prime[i] << '\n';
    // }
    /* so for a given int x show lowest prime of x and highest prime of x*/
    int q ; cin >> q ;
    while(q--){
        int x ; cin >> x ;
        cout << "Lowest prime of " << x <<" is : " << low_prime[x] << " Highest prime of " << x << " is : "<< high_prime[x]<< '\n';
    }
}