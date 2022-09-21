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
		cin >> n >> m;
		vin v(m);
		map < int , int > mp;
		for(int i=0; i<m; i++) {
			cin >> v[i];
			mp[v[i]]++;
		}
		ll ln = mp.size();
		ll ans = abs(n-ln);
		if(mp.size() == m and mp.size() == n) cout << 1 << endl;
		else{
			if(ln == n){
				cout<< n << endl;
			}
			else{
				cout << ln + 2 << endl;
			}
			
		}
		

		//cout << n << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/