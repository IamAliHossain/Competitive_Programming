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
		
		ll n, l, r;
		cin >> n >> l >> r;
		
		vin v;
		ll ok = 0 ;
		for(ll i=1; i<=n; i++){
			ll ans = (r / i);
			   ans *= i ;
			if(ans < l){
				ok = 1 ;
			}
		
			v.push_back(ans);
		}
		if(ok) no;
		else{
			yes;
			for(int i=0; i<n; i++)cout << v[i] << ' ';
			cout << endl;
		}

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/