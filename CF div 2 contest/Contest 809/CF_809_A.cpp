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
		
		int n, m;
		cin >> n >> m;
		vector< int > v(n);
		
		for(int i=0; i<n; i++) cin >> v[i] ;
		
		string s = string(m, 'B');
		

		for(int i=0; i<n; i++){
			ll mn = min( v[i], m + 1 - v[i] );
			ll mx = max( v[i], m + 1 - v[i] );
			mn--;
			mx--;
			//cout << mn << ' ' << mx << endl;
			if( s[mn] == 'B' ) {
				s[mn] = 'A';
			}
			else if( s[mx] == 'B' ) {
				s[mx] = 'A';
			}
			
		}
		cout << s << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/