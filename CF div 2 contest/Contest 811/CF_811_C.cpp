#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back

#define Bismillah() 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()


ali()
{
	Bismillah();
	
	test_case(){
		
		ll n, k;
		cin >> n ;
		 
		vin v ;
		
		if(n<10) {
			v.pb(n);
		}
		
		else{
			ll ans = 9;
			while(n>0){
				
				v.pb(ans);
				n -= ans;
				ans--;
				if(n < ans){
					if(n>0){
						v.pb(n); 
						break;
					}
					
				}
			}
		}
		
		reverse(v.begin(), v.end());
		for(auto u : v)cout << u ;
			cout << endl;
			
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/