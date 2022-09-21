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
		cin >> n >> k;
		vin v(2*n), a, b;
		for(int i=0; i<2*n; i++) cin >> v[i];

		sort(v.begin(), v.end());
		for(int i=0; i<n; i++){
			a.pb(v[i]);
		}
		for(int i=n; i<2*n; i++){
			b.pb(v[i]);
		}
		ll cnt = 0 ;
		for(int i=0; i<n; i++){
			if(abs(a[i] - b[i]) >= k) cnt ++;
		}
		if(cnt == n) yes;
		else no;

		// for(auto u : a) cout << u << ' ';
		// 	cout << endl;
		// for(auto x : b) cout << x << ' ';
		// 	cout << endl;
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/