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
	
	test_case(){
		
		ll n, k;
		cin >> n ;
		vin v(n), vv;
		for(int i=0; i<n; i++) cin >> v[i];

		vv = v;
		sort(vv.begin(), vv.end()); 
		if(n == 1) cout << -1 << endl;
		else{
			for(int i=0; i<n-1; i++){
				if(v[i]==vv[i]){
					swap(vv[i], vv[i+1]);
				}	
			}
			if(v[n-1] == vv[n-1]){
				swap(vv[n-1], vv[n-2]);
			}

			for(auto u: vv)cout << u << " ";
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