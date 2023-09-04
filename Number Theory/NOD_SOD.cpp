#include<bits/stdc++.h>
using namespace std ;

int main(){
    /*Number of Divisors(NOD) and Sum of Divisors(SOD)*/
    int n  ; cin >> n ;
    int numOfDivisors = 0 , sumOfDivisors = 0;
    /* Time complexity 0(N) */
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            numOfDivisors+=1;
            sumOfDivisors += i;
        }
    }
    
    /* Time complexity 0(sqrt(N)) */
    for(int i=1; i*i <= n; i++){
        if(n % i == 0){
            numOfDivisors++;
            sumOfDivisors += i ;
            if(n/i != i){
                numOfDivisors++;
                sumOfDivisors += n/i ;
            }
        }
    }
    cout << numOfDivisors << ' ' << sumOfDivisors << '\n';    
    /*Jodi Q query thake tahole sqrt(N) eo TLE dibe
    so to overcome this we need more optimized way 
    which is prime factorazation... goto that code (^_^)*/

    /* Time Complexity n*log(n)*/
    int N = 1e5+10;
    vector<int> divisors[N];
    for(int i=2; i<N; i++){
        for(int j = i ; j<N; j+=i){
            divisors[j].push_back(i) ;
        }
    }
    /* n/2 + n/3 + n/4... */
    for(int i=0; i<10; i++){ 
        for(auto u : divisors[i]){
            cout << u << ' ';
        }cout << '\n';
    }

}