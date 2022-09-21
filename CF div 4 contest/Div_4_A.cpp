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
		int n;
		cin >> n;
		if(n<=1399) cout <<"Division 4\n";
		else if(n>1399 and n<=1599) cout <<"Division 3\n";
		else if(n>1599 and n<=1899) cout <<"Division 2\n";
		else if(n>1899) cout <<"Division 1\n";

	}	
	return 0 ;
}
