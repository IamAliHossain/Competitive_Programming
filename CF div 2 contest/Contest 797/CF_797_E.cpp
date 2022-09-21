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

/* Alhamdulillah for Everything */

ali()
{
	Bismillah();
	
	test_case(){
		
		ll n, k;
		cin >> n >> k ;
		vin v(n), v1;
		for(int i=0; i<n; i++) cin >> v[i];

		
		ll ans=0, sum=0, res=0, rem=0;
		for(int i=0; i<n; i++){
			ans += (v[i]/k);
		}
		for(int i=0; i<n; i++){
			if(v[i]%k){
				v1.push_back(v[i]%k);
			}
		}
		// for(auto u : v1)cout << u <<" ";
		// 	cout << endl;
		int r = v1.size();
		sort(v1.begin(), v1.end());
		r= r-1;
		int l=0;
		while(l<r){
			if(v1[l]+v1[r]>=k){
				ans++;
				r--;
				l++;
			}
			else{
				l++;
			}
		}
		cout << ans << endl;

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/