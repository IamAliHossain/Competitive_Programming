#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back
#define show1(x)		cout << x << endl;
#define show2(x, y)		cout << x << " " << y << endl;
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
		
		ll n, m;
		cin >> n >> m;
		if( m % n == 0){
			cout << "YES\n";
			ll val = m/n;
			for(int i=0; i<n; i++){
				cout << val << " ";
			}
			cout << endl;
		}
		else {
			cout << "NO\n";
		}
		

	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/