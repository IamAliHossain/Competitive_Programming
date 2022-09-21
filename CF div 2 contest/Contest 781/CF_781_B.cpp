#include<bits/stdc++.h>
using namespace std;


#define 	ll 			long long int 
#define 	FAST()		ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define 	endl 		"\n"
#define 	yes 		cout << "YES\n"
#define 	no 			cout << "NO\n"

int main()
{
	FAST();

	int t;
	cin >> t;
	while(t--){ 
		
		int n, cnt,i,dis,mx,cur;
		cin >> n;
		vector < int > v;
		
		map< int,int> mp;
		
		mx=0;

		for(i=0; i<n; i++){
			int x;
			cin >> x;
			mp[x]++;
			mx = max(mx, mp[x]); // maximum elemnts er number nichi array er

		}
		
		dis = mp.size();
		//cout << dis << endl;

		if(dis==1 || n==1) cout << 0 << endl;
		
		else{
			// mx = 0;
			// for(auto [z, y] : mp){
			// 	mx = max(mx, y);
			// }

			int lagbe = n - mx ;
			cur = lagbe;
			while(lagbe>0){
				lagbe-=mx;
				mx*=2;
				cur++;
			}
		 	cout << cur << endl;
		}
		

	
	}
	return 0 ;
}
 