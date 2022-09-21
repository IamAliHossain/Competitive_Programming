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
		
		ll n, k;
		cin >> n >> k;
		if(k%4==0){
			no;
		}
		else {
			yes;
			if(k & 1){
				for(int i=1; i<=n; i+=2){
					cout << i << " " << i+1 << endl;
				}
			}
			else{
				for(int i=2; i<=n; i+=4){
					cout << i << " " << i-1 << endl;
				}
				for(int i=3; i<=n; i+=4){
					cout << i << " " << i+1 << endl;
				}
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