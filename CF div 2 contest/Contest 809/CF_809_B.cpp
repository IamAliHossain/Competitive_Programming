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
		
		int n;
		cin >> n ;
		map < int , int > odd, even;
		vector < int > v(n);

		for(int i=0; i<n; i++) cin >> v[i];

		for(int i=0; i<n; i++){
			int x ;
			x = v[i];
			if( (even[x] & 1) == (i&1) ) even[x]++;
				//cout << even[x] << " ";
			
		}
		// for(int i=0; i<n; i++){
		// 	cout << even[v[i]] << " ";
		// }
		// cout << endl;

		
		for(int i=0; i<n; i++){
			int x ;
			x = v[i];
			if( (x & 1) != (i&1) ) odd[x]++;
				//cout << odd[x]<<" ";
		}
		// for(int i=0; i<n; i++){
		// 	cout << odd[v[i]] << " ";
		// }
		// cout << endl;
		for(int i=1; i<=n; i++){
			cout << max(even[i], odd[i]) << ' ';
		} 









		// for(int i=0; i<n; i++){
		// 	int x = v[i];
		// 	if((even[x] & 1) == (i&1)) even[x]++; 
		// 	// cout << (even[x] & 1) << ' ';
		// }
		// for(auto u : even) cout << u.first << ' ' << u.second << endl;
		// for(int i=0; i<n; i++){
		// 	int x = v[i];
		// 	if((odd[x] & 1) != (i&1)) odd[x]++; 

		// 	// cout << (odd[x] & 1) << ' ';
		// }

		// for(auto u : odd) cout << u.first << ' ' << u.second << endl;
		// for(int i=1; i<=n; i++){
		// 	cout << max(even[i], odd[i]) << ' ';
		// }

	}
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/