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
		int a[n+1];

		map <ll, ll > mp;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		
		if(mp.size()==1)yes;

		else{

			int cnt=0;
			int temp=0;
			
			int ev1=0, od1=0, ev2=0, od2=0;
			
			for(int i=1; i<=n; i++){
				
				if(i%2==1){
					
					if(a[i]%2==0){
						ev1++;
					}
					else od1++;
				}
				else if(i%2==0){
					
					if(a[i]%2==0){
						ev2++;
					}
					else od2++;
				}

			}
			if((ev1!=0 and od1==0 and ev2==0 and od2!=0)) yes;
			else if((ev1==0 and od1!=0 and ev2!=0 and od2==0)) yes;
			else if(ev2+ev1==n || od1+od2==n)yes;
			else no;

		}
		
	}	
	return 0 ;
}
