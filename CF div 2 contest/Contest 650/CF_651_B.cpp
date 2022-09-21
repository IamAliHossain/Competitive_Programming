#include "bits/stdc++.h"
using namespace std;


#define ll  		long long int 
#define FAST		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl		"\n"
#define yes 		cout << "YES\n"
#define no  		cout << "NO\n"
#define vin 		vector<int>
#define vst 		vector<string>
#define pb  		push_back


int main()
{
	FAST;
	int t;
	cin >> t;
	while(t--){ 

		int n, m;
		cin >> n;
		m = n << 1; // love this left shift than mul by 2 

		vin a(m+1), even, odd;

		for(int i = 1; i <= m; i++)
		{
			cin >> a[i];
			if(a[i] % 2 == 1)
				odd.pb(i);
			else
				even.pb(i);
		}

		vector< pair< int, int > > ans;

		for(int i = 0; i < odd.size()-1 ; i += 2){
			
			ans.pb({odd[i], odd[i + 1]});

		}
		for(int i = 0; i < even.size()-1 ; i += 2){
			
			ans.pb({even[i], even[i + 1]});

		}
		for(int i = 0; i < n - 1; i++){

			cout << ans[i].first << " " << ans[i].second << endl;
		
		}
		
	}
	return 0;
}