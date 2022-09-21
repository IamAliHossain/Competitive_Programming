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
		cout << 2 << endl;
		
		ll ans = 2 ;
		vin befor, after, all, temp;
		
		befor.pb(1);
		for(int i=1; i<=n; i++){
			if(ans <= n){
				//cout << ans <<' ';
				befor.pb(ans);
				ans *=2 ;
			}
			
		}

		int res = 1 ;
		for(int i=3; i<=n; i+=2){
			res = i ;
			while( res <=n ){
				befor.pb(res);
				res *= 2;
			}

		}
		
		for(auto u : befor) cout << u <<' ';
			cout << endl;

		//cout << befor.size() << endl;
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/