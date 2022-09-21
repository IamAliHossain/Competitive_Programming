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



int main()
{
	Bismillah();
	
	test_case(){
		
			ll n, k, big;
			cin >> n >> k;

			vin v(n), odd, even, test;

			ll mx = -1e9;
			for(int i=0; i<n; i++){
				cin >> v[i];
				mx = max(mx, v[i]);
			}

			//cout << mx << endl;		
			
			for(int i=0; i<n; i++){
				odd.pb(mx - v[i]);
				
			}

			test = odd;
			sort(odd.begin(), odd.end());
			//cout << odd[odd.size()-1] << endl;
			
			ll mxx = -1e9;

			for(int i=0; i<n; i++){
				even.pb( odd[n-1]- test[i]);
			}

			if(k % 2){ 
				for(auto u: test)cout << u << ' ';
					cout << endl;
			}
			else{ 

				for(auto u: even)cout << u << ' ';
					cout << endl;
			}

	}	
	return 0 ;
}