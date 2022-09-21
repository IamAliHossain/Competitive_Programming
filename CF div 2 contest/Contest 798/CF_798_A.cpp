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
		
		ll n, m, k;
		cin >> n >> m >> k ;
		string s, t, ans="";
		
		cin >> s >> t;

		sort(s.begin(), s.end());
		sort(t.begin(), t.end());

		//cout << s <<" " << t<< endl;

		int i=0, j=0, chtr_s=0, chtr_t=0;

		while(i<n and j<m){
			
			if(s[i] <= t[j]){
				
				if(chtr_s < k){
					chtr_t = 0 ;
					ans += s[i];
					i++;
					chtr_s++;
				}
				else{

					chtr_s = 0 ;
					ans += t[j];
					j++;
					chtr_t++;
					
				}
			}

			else if(t[j] < s[i]){
				if(chtr_t < k){
					chtr_s = 0 ;
					ans += t[j];
					j++;
					chtr_t++;
					
				}
				else{
					ans += s[i];
					i++;
					chtr_s++;
					chtr_t = 0 ;
					
				}
			}
		}
		cout << ans << endl;

	}	
	return 0 ;
}

/*

a i=1, j=0 chtr_s = 1
aa i=2 j=0 chtr-s = 2
aaa i=3 j=0 chtr-s =3

aaab i=3 j=1 chtr-t = 1
aaabb i=3 j=2 chtr-t = 2

*/




/*

check negative value then mx = -1e9
check ll and int 
indexing of string always start with i=0;

*/