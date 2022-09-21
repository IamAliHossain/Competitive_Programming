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
		
		ll n, m;
		cin >> n ;

		ll ans ;
		ll yp = 0;
		ll yn= 0;

		ll xn = 0 ;
		ll xp = 0;

		ll yy, xx;

		for(int i=0; i<n; i++){
			ll x, y;
			cin >> x >> y;
			if(x<0){
				xn = min(xn, x);
				//cout << xn << endl;
			}
			else if(x>=0){
				xp = max(xp, x);
				//cout << xp << endl;
			}
			if(y<0){
				yn = min(yn, y);
				// cout << yn << endl;
			}
			else if(y>=0){
				yp = max(yp, y);
				// cout << yp << endl;
			}

			
		}
		// cout << xn << endl;
		// cout << xp << endl;
		// cout << yn << endl;
		// cout << yp << endl;
		xx = abs(xn)+xp;
		yy = abs(yn)+yp;
		ans = (xx*2)+(yy*2) ;
		cout << ans << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/