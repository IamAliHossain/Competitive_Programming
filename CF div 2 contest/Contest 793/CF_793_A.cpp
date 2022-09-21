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
		
		ll n, m;
		
		cin >> n;

		vin a(n) ;
		
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		
		cin >> m;
		vin b(m) ;
		
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		sort(b.begin(), b.end());

		//cout << a[n-1] <<" "<< b[m-1]<< endl;
		if(a[n-1] < b[m-1]){
			cout << "Bob\n" << "Bob" << endl;
		}
		else if(a[n-1] == b[m-1]){
			cout << "Alice\n" << "Bob" << endl;
		}
		else if(a[n-1] > b[m-1]){
			cout << "Alice\n" << "Alice" << endl;
		}

		

		
		
	}	
	return 0 ;
}

/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/