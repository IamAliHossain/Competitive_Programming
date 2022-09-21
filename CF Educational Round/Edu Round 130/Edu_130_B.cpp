
#include "bits/stdc++.h"
using namespace std;


#define ll  		long long int 
#define endl		"\n"
#define yes 		cout << "YES\n"
#define no  		cout << "NO\n"
#define vin 		vector<ll>
#define pb  		push_back

#define Bismillah() 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()


ali()
{
	Bismillah();
		
		ll n, tc;

		cin >> n >> tc;

		ll a[n+1], pf[n+1], tem[n+1];

		for(int i=0; i<n; i++){
			cin >> a[i];
		}

		sort(a, a+n);
		pf[0] = 0;

		for(int i=0; i<n; i++){
			pf[i+1] = pf[i] + a[i];

		}
	
		for(int i=1; i<=tc; i++){
			ll x,y;
			cin >> x >> y;
			cout << pf[n-x+y] - pf[n-x+0] << endl;
		}
		
	
	return 0 ;
}

// /*

// check negative value then mx = -1e9
// check ll and int 
// indexing of string always start with i=0;

// */

