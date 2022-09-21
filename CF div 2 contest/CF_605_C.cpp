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

int vst[27];

int main()
{
	Bismillah();
	
	//test_case(){
		
		ll n, k;
		cin >> n >> k;
		
		string s;
		cin >> s;
		vector < char > v(k);

		for(int i=0; i<k; i++){
			cin >> v[i];
		}
		
		for(int i=0; i<k; i++){
			
			vst[v[i] - 'a'] = 1;
		}
		//for(auto u : vst)cout<< u <<" ";
		
		ll ans = 0;
		ll cnt = 0;
		for(int i=0; i<s.size(); i++){
			if(vst[ s[i] - 'a' ] == 1){
				cnt++;
			}
			else {
				ans += cnt*(cnt+1)/2;
				cnt = 0;
			}
		}
		ans += cnt*(cnt+1)/2;
		cout << ans << endl;

		

	//}	
	return 0 ;
}

// check negative value then mx = -1e9
// check ll and int 



