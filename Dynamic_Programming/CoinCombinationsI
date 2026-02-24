#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> dp(m+1,0);
    int Mod = 1e9+7;
    dp[0] = 1;
    for(int i=1;i<=m;i++){
        for(int j:v){
            if(i-j>=0){
                dp[i] = (dp[i]+dp[i-j])%Mod;
            }
        }
    }
    cout<<dp[m];
}
