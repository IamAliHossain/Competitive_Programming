#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back

#define Do_Fast() 		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()

void Bismillah(){
	
	Do_Fast();
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

ali()
{
	Bismillah();
	
	test_case(){
		
		ll n, m;
		cin >> n ;
		vin v(n+2), range, main;
		ll mx = 0;
		ll mn = 1e9;
		ll mn_ind ;
		ll mx_ind;
		for(int i=1; i<=n; i++){
			cin >> v[i];
			if( v[i] <= mn){
				mn = v[i];
				mn_ind = i;
			}
			if( v[i] >= mx){
				mx = v[i];
				mx_ind = i;
			}
		}
		ll r = max( mx_ind, mn_ind );
		ll l = min( mx_ind, mn_ind );
		cout << l << " " << r << endl;
		// for(auto u : v)cout << u << " " ;
		// 	cout << endl;
		for(int i=1; i<=n; i++){
			
			if( i >= l && i <= r ){
				range.push_back( v[i] );
			}
			else {
				main.push_back( v[i] );
			}
		}
		sort(main.begin(), main.end());
		sort( range.begin(), range.end());
		cout << range.size() << endl;
		for(auto u : main)cout << u << " " ;
			cout << endl;
		ll frst = main[main.size() - 1] - main[0];
		ll scnd = range[range.size() - 1] - range[0];
		ll ans = frst + scnd; 
		cout << ans << endl;

		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/