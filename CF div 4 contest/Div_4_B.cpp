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



int main()
{
	FAST;
	int t;
	cin >> t;
	while(t--){

		ll n,ans,cnt;
		cin >> n;
		vin v(n+1);
		map< ll, ll>mp;
		for(int i=0; i<n;i++){
			cin >> v[i];
			mp[v[i]]++;
		}
		 ans = 0;
		ll temp=0;
		for(auto u: mp){
			if(u.second >= 3){
				temp = 1;
				ans = u.first;
				break;
				//cout << u.first << endl;
			}
		}
		if(temp==1) cout << ans << endl;
		else cout << -1 << endl;
		

	}	
	return 0 ;
}
