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
	
	//test_case(){
		
		int n, q;
		cin >> n >> q ;
		vector < ll > v(n), pre_sum(n+1, 0), suf_sum(n+1, 0);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}

		ll sum  = 0 ;
		for(int i=1; i<n; i++){
			if(v[i] < v[i-1]){
				sum += abs(v[i-1] - v[i]);
			}
			pre_sum[i] = sum;
			//cout << psum[i] << ' ';
		}
		
		sum = 0 ;
		for(int i=n-2; i>=0; i--){
			if(v[i] < v[i+1]){
	
				sum += abs(v[i+1] - v[i]);
			}
			suf_sum[i] = sum ;
			//cout << ssum[i] << ' ';
		}
	

		while(q--){
			ll l , r ;
			cin >> l >> r ;
			l--;
			r--;
			if(l<=r){
				cout << pre_sum[r] - pre_sum[l] << endl;
			}
			else if(l>r){
				cout << suf_sum[r] - suf_sum[l] << endl;
			}
			
		}
	//}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/