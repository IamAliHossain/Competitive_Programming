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
const int N = 1e6 + 10 ;
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

		ll n, x, y;
		cin >> n >> x >> y ;
		//n--;
		
		if( (x == 0 && y == 0) || (x != 0 && y != 0)){
			cout << -1 << endl;
		}
		else{
			ll d = (x+y);
			n--;
			if( n % d ==0 ){
				ll mx = max(x,y);
				for(int i=2; i<=n+1; i+=mx){
					for(int j=0; j<mx; j++){
						cout << i << " ";
					}
				}
				cout << endl;
			}
			else {
				cout << -1 << endl;
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
