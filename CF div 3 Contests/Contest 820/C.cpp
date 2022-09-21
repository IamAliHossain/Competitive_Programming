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
		
		string s;
		cin >> s ;
		ll n = s.size();
		vin index[26], ans;
	
		for(ll i=0; i<n; i++){
            index[s[i]-'a'].push_back(i+1);
        }

		ll cost = abs((s[0]-'a') - (s[n-1]-'a'));
		ll steps = 0 ;
		ll start = (s[0]-'a');
		ll finish = (s[n-1]-'a');

		if(start <= finish){
			for(ll i=start; i<= finish; i++){
				ll len = index[i].size();
				steps += len;
				for(int j=0; j<len; j++){
					ans.pb( index[i][j] );
				}

			}
		}
		else if(start > finish){
			for(ll i=start; i>= finish; i--){
				ll len = index[i].size();
				steps += len;
				for(int j=0; j<len; j++){
					ans.pb( index[i][j] );
				}

			}
		}
		show2(cost, steps);
		for(auto u : ans){
			cout << u << " ";
		}
		cout << endl;
		ans.clear();
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/