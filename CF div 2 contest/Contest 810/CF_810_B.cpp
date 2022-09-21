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
		vector < int > v(n);
		map < int, int> degree;
		for(int i=0; i<n; i++) cin >> v[i];
		
		int mn = INT_MAX;
		
		for(int i=0; i<m; i++){
				int x, y;
				cin >> x >> y;
				x--;
				y--;
				degree[x]++;
				degree[y]++;
				mn = min(mn, (v[x]+v[y]));
		}

		if(m % 2 == 0) {

			cout << 0 << endl;	
		
		}
		else{
			int ans = mn ;
			for(int i=0; i<n; i++){
				if(degree[i] & 1){
					ans = min(ans, v[i]);
				}
				
			} 
			cout << ans  << endl;
		}	
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/