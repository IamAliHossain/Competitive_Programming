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


bool possible(ll n, ll m, vin v, ll k){
	ll tot_col = 0;
		for(int i=0; i<k; i++){
			if( i== 0 and m&1 ){
				
				if( (v[i]/n) < 3){
					return false;
					// ok = 0;
					// break;
				}
				else{
					v[i] -= (3ll*n);
					tot_col += 3;
				}
			}
			
			if(tot_col >= m){
				return true;
				// ok = 1;
				// break;
			}
			
			if((v[i]/n) < 2){
				continue;
			}

			tot_col += (v[i]/n);
			
		}
		return (tot_col >= m);
}

ali()
{
	Bismillah();
	
	test_case(){
		
		ll n, m, k;
		cin >> n >> m >> k ;
		vin v(k);
		
		for(int i=0; i<k; i++) cin >> v[i];

		sort(v.begin(), v.end(), greater<ll>());
	
		if( possible(n,m, v, k) or possible(m ,n, v, k)) yes;
		else no;
			
	}

	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/