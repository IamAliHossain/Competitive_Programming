#include "bits/stdc++.h"
using namespace std;


#define ll  			long long int 
#define endl			"\n"
#define yes 			cout << "YES\n"
#define no  			cout << "NO\n"
#define vin 			vector<ll>
#define pb  			push_back
#define show1(x)		cout << x << endl;
#define show2(x, y)		cout << x << " " << y << endl;
#define Do_Fast() 		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test_case() 	int t; cin >> t; while(t--)
#define ali()       	int main()

void Bismillah(){
	
	Do_Fast();
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif // ONLINE_JUDGE
}

ali()
{
	Bismillah();
	
	test_case(){
		
		
		
		string s, ans ="";
		ll n;
		cin >> n >> s ;
	

		for(int i=n-1; i>=0; i--){
			
			if(s[i] != '0'){
				int num = s[i] - '0';
				ans.push_back( 'a' + (num-1));
			}
			else {
				int a = s[i-2] - '0';
				int b = s[i-1] - '0';
				int num = a*10 + b ;
				ans.push_back( 'a' + (num-1) );
				i-=2;
			}
		}
			
		reverse(ans.begin(), ans.end());
		cout << ans<< endl;
		ans.clear();
		
		
		
		//show1(n);
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/