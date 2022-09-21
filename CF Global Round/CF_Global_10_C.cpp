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
		
		int n, k;
		cin >> n;
		vin v(n), res;

		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		
		ll ans = 0 ;
		for(int i=0; i<n-1; i++){
			
			if(v[i+1] - v[i] < 0 ){
				
				ans += v[i+1] - v[i];

			}
		}
		cout << abs(ans) << endl;


	}	
	return 0 ;
}

// check negative value then mx = -1e9
// check ll and int 