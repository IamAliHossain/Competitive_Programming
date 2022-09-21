#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back

#define Do_Fast() 		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()

void Bismillah(){
	
	Do_Fast();
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

ali()
{
	Bismillah();
	
	test_case(){
		
		ll n, q;
		cin >> n >> q;
		vin v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		ll index, k;
		
		map< ll, ll > mp;
		while(q--){
			cin >> index >> k;
			index--;
			if(v[index] > v[index+1]){
				cout << v[index+1] << endl;
			}
			else {
				cout << "0\n";
			}
			// mp[index] = v[index];
			// for(auto u : mp)cout<< u.first << " " << u.second << endl;
		}
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/