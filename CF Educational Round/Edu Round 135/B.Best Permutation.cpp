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
		
		int n, q;
		cin >> n ;
		//if( n & 1){ 
			for(int i = n-3 ; i>1; i--){
				cout << i << " ";
			}
			cout << (n - 2) << " " << 1 << " "<<  (n - 1) << " " << n << endl;
		//}
		// else {
		// 	//even is correct
		// 	for(int i= n-2 ; i>=1; i--){
		// 		cout << i << " ";
		// 	}
		// 	cout << (n - 1) << " " << n << endl;
		// }

		// show1(n);
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/