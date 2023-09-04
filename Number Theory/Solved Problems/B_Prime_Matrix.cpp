/*Problem Link : https://codeforces.com/problemset/problem/271/B*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
bool isPrime[N];
void seive(){
    isPrime[0] = isPrime[1] = 1 ;
    for(int i=2; i*i<N; i++){
        if(isPrime[i] == 0){
            for(int j=2*i; j<N; j+=i){
                isPrime[j] = 1 ;
            }
        }
    }
}
int main(){
    seive();
    int n, m ;
    cin >> n >> m ;
    int a[n+5][m+5];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    int row_move = 1e9  , cnt ;
    for(int i=0; i<n; i++){
        cnt = 0 ;
        for(int j=0; j<m; j++){
            if(isPrime[a[i][j]]){
                int x = a[i][j] ;
                while(isPrime[x]){
                    x++;
                    cnt++;
                }
            }
        }
        row_move = min(row_move, cnt);
    }

    int col_move = 1e9 ;
    for(int i=0; i<m; i++){
        cnt = 0 ;
        for(int j=0; j<n; j++){
            if(isPrime[a[j][i]]){
                int x = a[j][i];
                while(isPrime[x]){
                    x++;
                    cnt++;
                }
            }
        }
        col_move = min(col_move, cnt);
    }
    cout << min(row_move,col_move) << '\n';
}