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
		
		ll n, h, m;
		cin >> n >>h >> m;
		vector< pair< ll, ll> > v;
		
		ll ans= 1e9 ;
		while(n--){
			ll x, y;
			cin >> x >> y;
			
			ll r = x * 60 + y;
			ll l = h * 60 + m;
			
			ll diff = r - l ;

			if(diff < 0){
				diff += 1440;
			}
			ans = min ( ans, diff);
			diff = 0;
		}

		cout << (ans/60) << " " << (ans%60) << endl;
	
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/