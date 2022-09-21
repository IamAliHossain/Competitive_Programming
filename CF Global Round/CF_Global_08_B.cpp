#include "bits/stdc++.h"



#define ll  		long long int 
#define FAST		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl		"\n"
#define yes 		cout << "YES\n"
#define no  		cout << "NO\n"
#define vin 		vector<ll>
#define vst 		vector<string>
#define pb  		emplace_back

using namespace std;

ll a[11];
string s = "codeforces";

bool isValid(ll k){
	ll res =  1;

	for(int i=1; i<=10; i++){
		res *= a[i];
		if(res >= k) return true;
	}
	return false;
}

int main()
{
	FAST;
	int t=1;
	//cin >> t;
	while(t--){

		//sobgula character occurences 1 baar kore rakhar jonno
		for(int i=1; i<=10; i++){
			a[i] = 1;
		}
		
		ll k;
		cin >> k;
		int i=0;
		
		// jodi k > 1 er boro hoy tobe per character baranor jonno

		if(k > 1){ 
			while(1){
				
				i++;
				
				if(i>10) i = 1; // array er size 10 tai i er value increase jeno 10 over na kore
				
				a[i]++; // array er value increase korchi
				
				if(isValid(k)) // k checking jeno atleast k er soman hoy occurences
					break;
			}

		}

		for(int i=1; i<=10; i++){
			
			while(a[i]--){ 
				cout << s[i-1];
			}
		}
		cout << endl;


	}	
	return 0 ;
}
