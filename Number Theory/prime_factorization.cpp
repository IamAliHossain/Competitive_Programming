#include<bits/stdc++.h>
using namespace std;

int main(){
    int t  ;
    t = 1 ;
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> prime_factors ;
        for(int i=2; i*i<=n ; i++){
            while(n % i == 0){
                prime_factors.push_back(i);
                n /= i ;
            }
        }
        /*24 ke 2 diye divide korte korte 24, 12, 6, 3 hobe
        orthat 2 diye divisibe hobe na 3 te eshe thambe erpore i=3 hobe 
        so again i*i <= n check korbe .
        ekhon n = 3 and i*i = 3*3 hobe so 3*3 <= 3 condition fail korbe
        ei karone loop er baire ekta checker lagbe which is n > 1 hoile setake 
        vector er vitore push korte hobe.
        n = 24 and n = 36 diyei er proof pawa jay
        */
       
        if(n > 1)prime_factors.push_back(n);
        for(auto u : prime_factors){
            cout << u << ' ';
        }cout << '\n';
    }
}