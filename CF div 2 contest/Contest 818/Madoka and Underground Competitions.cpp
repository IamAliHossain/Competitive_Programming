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
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif // ONLINE_JUDGE
}

ali()
{
	Bismillah();
	test_case(){
		ll n, m, r, c;
		cin >> n >> m >> r >> c;
		string a[n][n];
		ll x = n/m;
		if( x == n ){
			for(int i=1; i<=n; i++){
				for(int j=1; j<=n; j++){
					cout << "X";
				}
				cout << endl;
			}

		}
		else {
			for(int i=1; i<=n; i++){
				for(int j=1; j<=n; j++){

					if((i+j) % m == (r+c) % m){
						cout << "X";
					}
					else {
						cout << ".";
					}
				}
				cout << endl;
			}
			
		}
		
	}
	



	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/