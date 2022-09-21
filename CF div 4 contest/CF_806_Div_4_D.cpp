#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back

#define Bismillah() 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()


ali()
{
	Bismillah();
	
	test_case(){
		
		ll n ;
		cin >> n ;
		
		vector < string > s;
		map < string , bool > mp;
		string ans, s1, s2;

		for(int i=0; i<n; i++){
			string t;
			cin >> t ;
			s.push_back(t);
			mp[t] = true ;
		}
		for(int i=0; i<n; i++){
			int ok = false;
			
			for(int j = 1; j<s[i].length(); j++){
				
				s1 = s[i].substr(0, j);
				s2 = s[i].substr(j, s[i].length() - j);

				if(mp[s1] and mp[s2]){
					ok = true;
					break;
				}
				
			}
			if(ok) ans.pb('1');
			else ans.pb('0');

		}
		cout << ans << endl;
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/