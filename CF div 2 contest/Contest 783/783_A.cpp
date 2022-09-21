#include<bits/stdc++.h>
using namespace std;


#define ll 			long long int 
#define FAST 		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl 		"\n"
#define yes 		cout << "YES\n"
#define no 			cout << "NO\n"
#define vin 		vector<ll>
#define vst 		vector<string>
#define pb			push_back
void init_code(){
	FAST;
	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

	#endif // ONLINE_JUDGE
}


int main()
{
	init_code();
	int t;
	cin >> t;
	while(t--){

		ll r, c;
		
		cin >> r >> c;
		
		if((r==1 and c>=3) || (c==1 and r>=3)) cout << -1 << endl;
		
		else{
			ll ans;
			
			if((r+c)%2==0){

				ans = 2*max(r,c) - 2;
			}
			else ans = 2*max(r,c) - 3;
			cout << ans << endl;
		}


	} 
		
	
	return 0 ;
}
