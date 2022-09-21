#include "bits/stdc++.h"
using namespace std;


#define ll	long long int 
#define FAST	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl	"\n"
#define yes	cout << "YES\n"
#define no 	cout << "NO\n"
#define vin	vector<ll>
#define pb 	emplace_back



int main()
{
	FAST;
	int t;
	cin >> t;
	while(t--){

		string s, ans ;
		cin >> s;
		
		ll ln = s.size();
		
		ans.push_back(s[0]);

		for(int i=1; i<s.size()-1; i+=2){
			
			ans.push_back(s[i]);

		}
		
		ans.push_back(s[ln-1]);

		for(int i=0; i<ans.size(); i++){
			cout << ans[i];
		}
		cout << endl;

	}	
	return 0 ;
}
