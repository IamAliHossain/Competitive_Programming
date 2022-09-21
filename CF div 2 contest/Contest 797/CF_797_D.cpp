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
#define ali()       	int main()


ali()
{
	Bismillah();
	
	test_case(){
		
		int n, k;
		cin >> n >> k ;
		string s;
		cin >> s;

		// Solution using sliding window technique
		int w=0;
		for(int i=0; i<k; i++){
			
			if(s[i]=='W'){ 
				w++;
			}
			
		}
		int ans = w ;

		for(int i=k; i<n; i++){

			if(s[i]=='W')w++;
			if(s[i-k]=='W')w--;
			ans = min(ans, w);

		}
		cout <<  ans << endl;

	}
		
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/