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
		
		int n, k;
		cin >> n;
		vin v(n);
		map < int , int > mp;
		int zero = 0;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i] > 0){
				mp[v[i]]++;
			}
			if(v[i] == 0) zero++;
		}
		if(mp.size()==n)cout << n+1 << endl;
		else if(zero > 0) cout << n - zero << endl;
		else cout << n  << endl;

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/