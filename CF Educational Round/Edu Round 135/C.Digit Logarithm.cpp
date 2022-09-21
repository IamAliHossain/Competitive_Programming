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
		
		priority_queue< ll > q1, q2;

		for(int i=0; i<n; i++){
			cin >> a[i];
			q1.push(a[i]);
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
			q2.push(b[i]);
		}
		ll cnt = 0;
		while(!q1.empty()){
			ll a = q1.top();
			ll b = q2.top();
			q1.pop();
			q2.pop();
			string sa, sb;

			if( a == b){
				continue;
			}
			
			if( a > b){
				
				sa = to_string(a);
				ll ln = sa.size();
				q1.push(ln);
				q2.push(b);
				cnt++;	
				
			}
			else{
				
				sb = to_string(b);
				ll ln = sb.size();
				q2.push(ln);
				q1.push(a);
				cnt++;
				
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








// #include "bits/stdc++.h"
// using namespace std;


// #define ll  			long long int 
// #define endl			"\n"
// #define yes 			cout << "YES\n"
// #define no  			cout << "NO\n"
// #define vin 			vector<ll>
// #define pb  			push_back
// #define show1(x)		cout << x << endl;
// #define show2(x, y)		cout << x << " " << y << endl;
// #define Do_Fast() 		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// #define test_case() 	int t; cin >> t; while(t--)
// #define ali()       	int main()

// void Bismillah(){
	
// 	Do_Fast();
	
// 	// #ifndef ONLINE_JUDGE
// 	// freopen("input.txt", "r", stdin);
// 	// freopen("output.txt", "w", stdout);
// 	// #endif // ONLINE_JUDGE
// }

// ali()
// {
// 	Bismillah();
	
// 	test_case(){
		
// 		ll n, q;
// 		cin >> n ;
// 		vin a(n),ar, a_9, b_9, final_a, final_b, b(n), br, v, vv;
// 		set< ll > sa, sb, new_a,new_b;
		
// 		for(int i=0; i<n; i++){
// 			cin >> a[i];
// 			sa.insert(a[i]);
// 		}

// 		// For B array copy element thakle array B te r rakhbo na ami
// 		for(int i=0; i<n; i++){
// 			cin >> b[i];
// 			sb.insert( b[i] );
// 			if(sa.find( b[i] ) == sa.end()){
// 				new_b.insert( b[i] );
// 				br.push_back( b[i] );
// 			}
// 		}
// 		// For A array copy element thakle array A te r rakhbo na ami
// 		for(int i=0; i<n; i++){
// 			if(sb.find( a[i] ) == sb.end()){
// 				new_a.insert( a[i] );
// 				ar.push_back( a[i] );
// 			}
// 		}
// 		// for(auto u : ar)cout << u << " ";
// 		// 	cout << endl;
// 		// for(auto u : br)cout << u << " ";
// 		// 	cout << endl;

// 		string as, bs;
// 		ll cnt = 0;
// 		map< ll, ll > mpa, mpb;
// 		for(int i=0; i<ar.size(); i++){
			
// 			if( 9 < br[i] ){
// 				bs = ( to_string(br[i]) );
// 				ll ln = bs.size();
// 				final_b.push_back(ln);
// 				//mpb[ln]++;
				
// 				cnt++;
// 			}
// 			else{
// 				final_b.push_back(br[i]);
// 				//mpb[br[i]]++;
				
// 			}

// 			if(  9 < ar[i] ){
// 				as = ( to_string(ar[i]) );
// 				ll ln = as.size();
// 				final_a.push_back(ln);
// 				//mpa[ln]++;
// 				cnt++;
// 			}
// 			else{
// 				final_a.push_back(ar[i]);
// 				//mpa[ar[i]]++;
// 			}
			
// 		}

// 		sort( final_a.rbegin(), final_a.rend() );
// 		sort( final_b.rbegin(), final_b.rend() );
// 		for(int i=final_a.size()-1; i>=0; i--){
// 			if( final_a[i] == 1 ){
// 				final_a.pop_back();
// 			}
// 		}
// 		for(int i=final_a.size()-1; i>=0; i--){
// 				mpa[final_a[i]]++;
// 		}

// 		for(int i=final_a.size()-1; i>=0; i--){
// 			if( final_b[i] == 1 ){
// 				final_b.pop_back();
// 			}
// 		}
// 		for(int i=final_b.size()-1; i>=0; i--){
// 				mpb[final_b[i]]++;
// 		}
// 		sort( final_a.begin(), final_a.end() );
// 		sort( final_b.begin(), final_b.end() );
// 		// cout << "Counter : ";
// 		// show1(cnt);
// 		cout << "final_a : " ;
// 		for(auto u : final_a)cout << u << " ";
// 			cout << endl;
// 		cout << "final_b : " ;
// 		for(auto u : final_b)cout << u << " ";
// 			cout << endl;
		
// 		cout << endl;
// 		if( a == b ){
// 			cout << 0 << endl;
			
// 		}
// 		else if( a != b ){
			
			
// 			v = final_a;
// 			vv = final_b;

// 			// for(int i=0; i<v.size(); i++){
				
// 			// 	ll l = 0, r = final_a.size() - 1;
				
// 			// 	while(l <= r ){
// 			// 		ll mid = (l + r) / 2 ;

// 			// 		if( v[i] < final_b[mid] ){
// 			// 			r = mid - 1;
// 			// 		}
// 			// 		else if( v[i] > final_b[mid] ){
// 			// 			l = mid + 1;
// 			// 		}
// 			// 		else if(v[i] == final_b[mid]){
// 			// 			v[i] = - 1;
// 			// 		}
					
// 			// 	}
// 			// }
// 			// sort( v.rbegin(), v.rend() );
// 			// cout << "Before pop back of V: \n" ;
// 			// for(auto u : v)cout << u << " ";
// 			// 	cout << endl;
// 			// for(int i=v.size()-1; i>=0; i--){
// 			// 	if(v[i]<0){
// 			// 		v.pop_back();
// 			// 	}
// 			// }

// 			// // cout << "Size of 1st array now : ";
// 			// // show1(v.size());
// 			// cout << "After pop back of V : \n" ;
// 			// for(auto u : v)cout << u << " ";
// 			// 	cout << endl;
// 				cout << endl;
// 			// ll sum = 0 ;
// 			// for( int i=0; i<mpa.size(); i++){
// 			// 	if(mpa[i] == mpb[i]){
// 			// 		sum += abs(mpa[i] - mpb[i]);
// 			// 	}
				
// 			// }

// 			// for(int i=0; i<vv.size(); i++){
				
// 			// 	ll l = 0, r = final_b.size() - 1;
				
// 			// 	while(l <= r ){
// 			// 		ll mid = (l + r) / 2 ;

// 			// 		if( vv[i] < final_a[mid] ){
// 			// 			r = mid - 1;
// 			// 		}
// 			// 		else if( vv[i] > final_a[mid] ){
// 			// 			l = mid + 1;
// 			// 		}
// 			// 		else if(vv[i] == final_a[mid]){
// 			// 			vv[i] = - 1;
// 			// 		}
					
// 			// 	}
// 			// }
// 			// sort( vv.rbegin(), vv.rend() );
// 			// cout << "Before pop back VV : \n" ;
// 			// for(auto u : vv)cout << u << " ";
// 			// 	cout << endl;
// 			// for(int i=vv.size()-1; i>=0; i--){
// 			// 	if(vv[i]<0){
// 			// 		vv.pop_back();
// 			// 	}
// 			// }
// 			// cout << "After pop back VV : \n" ;
// 			// for(auto u : vv)cout << u << " ";
// 			// 	cout << endl;
// 			ll num_operation ;
// 			if(v.size() && vv.size()){
// 				ll sum = 0 ;
// 				for( int i=0; i<mpa.size(); i++){
// 					if(mpa[i] == mpb[i]){
// 						sum += abs(mpa[i] - mpb[i]);
// 					}
					
// 				}
// 				num_operation = cnt  + v.size() + sum;
// 			}
// 			else{
// 				num_operation = cnt  + 2ll*v.size() + sum;
// 			}
// 			//ll num_operation = cnt  + v.size() + sum;
// 			cout << "Operation Needed : " << num_operation << endl;
// 		}

// 		v.clear();
// 		vv.clear();
// 		a.clear();
// 		b.clear();
// 		ar.clear();
// 		br.clear();
// 		final_a.clear();
// 		final_b.clear();
// 		new_a.clear(); 
// 		new_b.clear();
// 		//show1(ans);
		
// 	}	
// 	return 0 ;
// }

// /*

// check negative value then mx = -1e9
// check ll and int 
// indexing of string always start with i=0;

// */