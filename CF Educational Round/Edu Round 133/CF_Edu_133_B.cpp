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
		cin >> n ;
		vin v;
		for(int j=0; j<n; j++){
			v.pb(j+1);
		}
		

		cout << n << endl;
		for(auto u : v) cout << u <<" ";
			cout << endl;
		for(int i=0; i<n-1; i++){
			
			if((i+1) < n){
				swap( v[i], v[i+1]);
			}

			int cnt = 0 ;
			for(int k=0; k<n; k++){ 
				
				cout << v[k] << " ";
				cnt++;
				if(cnt % n == 0) cout << endl;

				
			}
		}
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/