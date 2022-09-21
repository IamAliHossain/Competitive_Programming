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



int main()
{
	Bismillah();
	
	test_case(){
		
		string s;
		cin >> s;
		
		map <char, int > mp;
		for(int i=0; i<s.size(); i++){
			mp[s[i]]++;
		}
		//cout << mp.size() << endl;

		int fal = 0;
		int temp = 0;
		for(int i=0; i<s.size(); i++){
			if(i < mp.size()){
				if(s[i] == s[i-1]){
					fal = 1;
					break;
				}
			}
			else{
				if(s[i] != s[i - mp.size()]){
					temp = 1 ;
					break;
				}
			}
		}

		if(temp || fal)no;
		else yes;
	
	}	
	return 0 ;
}

// check negative value then mx = -1e9
// check ll and int 