#include<bits/stdc++.h>
using namespace std;


#define ll long long int 
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
	//FAST ;
	int t;
	cin >> t;
	while(t--){ 
		
		ll n, cnt,i, sum_a, sum_b,temp,res,ans;
		cin >> n;
		vector < ll > a(n),b(n);
		
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
		}
		

		for(i=0; i<n; i++){
			
			if(a[i] < b[i]){
				
				temp = a[i];
				a[i] = b[i];
				b[i] = temp;
			}
		
		}

		//sum_a = 0;
		res=0;
		ans=0;
		for(int i=0; i<n-1; i++){
			sum_a = abs(a[i]-a[i+1]);
			res+=sum_a;
		}
		//cout << res << endl;

		sum_b = 0 ;
		for(int i=0; i<n-1; i++){
			sum_b += abs(b[i] - b[i+1]);
		}
		cout << sum_b + res << endl;
		












		// for(auto u :a)cout << u << " ";
		// 	cout<< endl;
		// for(auto u :b)cout << u << " ";
		// 	cout<< endl;
		
	
	}
	return 0 ;
}
