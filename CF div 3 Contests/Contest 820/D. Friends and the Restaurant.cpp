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
		
		ll n, q;
		cin >> n ;
		vin a(n), b(n);
		deque< int > dq, q1, q2;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
			dq.push_back(b[i] - a[i]);
		}

		sort(dq.begin(), dq.end());
		int cnt = 0;
		while( dq.size() > 1 ){

			while( dq.size() > 1 && (dq.front() + dq.back()) < 0) {
				dq.pop_front();
			}
			if(dq.size() > 1){
				cnt++, dq.pop_back(), dq.pop_front();
			}
			
		}
		cout << cnt << endl;
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/