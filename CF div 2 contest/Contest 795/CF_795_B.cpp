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

void sol(){
	ll n, k;
		cin >> n ;
		vin v(n),index;
		map< int , int> mp;

		for(int i=0; i<n; i++){
			cin >> v[i];
			mp[v[i]]++;
		}

		if(n == 1){
			cout << -1 << endl;
			return;
		}

		for(auto u: mp){
			if(u.second < 2){
				cout<< -1 << endl;
				return ;
			}
		}
		int x=2;
		int first=1;
		for(int i=0; i<n-1; i++){
			if(v[i]!=v[i+1]){
				cout << first << " ";
				first = i+2;
				x++;
			}
			else {
				cout << x << " ";
				x++;
			}
		}
		cout << first <<endl;		

}

ali()
{
	Bismillah();
	
	test_case(){
		sol();

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/