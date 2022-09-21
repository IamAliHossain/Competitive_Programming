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
	
	//test_case(){
		
		ll n, k;
		cin >> n ;
		vin a(n);
		for(int i=0; i<n; i++) cin >> a[i];

		ll ans = 1e18+7;
		

		for(int i=1; i<n; i++){
			ll back = 0;
			ll cnt  = 0 ;
			for(int j=i-1; j>=0; j--){
				ll op_lagbo = (back/a[j]) + 1;
				back = a[j] * op_lagbo;
				cnt += op_lagbo;
			}
			ll front = 0;
			for(int j=i+1; j<n; j++){
				ll op_lagbo = (front/a[j]) + 1;
				front = a[j] * op_lagbo;
				cnt += op_lagbo;
			}

			ans = min(ans, cnt);
		}
		cout << ans << endl;
	//}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/