
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
		int n; cin >> n;
		string s, t;  cin >> s >> t;
		
		
		for(int i=0;i<n;i++){
			
			if(s[i]!=t[i] and i<n-1){
				
				int j=i+1;
				while(j<n and s[j]==s[i] )
					j++;
				
				if(j<n and t[i]==s[j] and s[j]==s[i]+1){
					swap(s[j], s[i]);
				}

			}
        }
		
		if(s==t) cout << "YES" << endl;
		else cout << "NO\n";
		
	}	
	
	return 0 ;
}

// /*

// check negative value then mx = -1e9
// check ll and int 
// try to take n as int cause long long causes TLE sometimes
// references Edu 130 problem C 
// indexing of string always start with i=0;

// */

