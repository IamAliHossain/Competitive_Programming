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

		string s;
		cin >> s;
		
		int cnt=1;
		int temp = 0 ;

		for(int i=0; i<s.size()-1; i++){
			if(s[i] == s[i+1])cnt++;
			else{
				if(cnt==1)temp = 1;
				cnt = 1;
			}
		}
		if(cnt == 1) temp = 1 ;
		if(temp)no;
		else yes;

	}	
	return 0 ;
}
