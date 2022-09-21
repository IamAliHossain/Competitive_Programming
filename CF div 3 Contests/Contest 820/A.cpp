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

int main()
{
	Bismillah();
	
	test_case(){
		
		ll a, b , c;
		cin >> a >> b >> c;
		ll x = a - 1;
		ll y = abs(b - c) + (c - 1);
		ll ans = 0;
		if(x > y){
			ans = 2;
		}
		else if(x < y){
			ans = 1;
		}
		else {
			ans = 3 ;
		}
		cout << ans << endl;
		show1(a);
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/