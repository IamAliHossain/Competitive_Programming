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
		
		ll n,m;
		cin >> n >> m;
		ll a[n+1][m+1];
		
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}

		ll  h= 0, w=0;
		ll mx = -1e9;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++){
				if( mx < a[i][j]){
					mx = a[i][j];
					 h = i;
					 w = j ;
				}
			}
		}
		ll ans;
		ll x = h, y = w;
		
		//cout << x << " "<< y << endl;
		if(x == n and (n!=1 and m!=1)){
			
			ans = n * y ;
			cout << ans << endl;
			
		}
		else{
			ans = (n - x + 1) * y ;
			cout << ans << endl;
		}
		


	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/