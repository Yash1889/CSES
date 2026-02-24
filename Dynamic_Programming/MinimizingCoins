#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    vector<int> dp(m+1,1e9);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    dp[0] = 0;
    // long long Mod = 1e9+7;
    for(int i=1;i<=m;i++){
        for(auto j:v){
            if(i-j>=0){
                dp[i] = min(dp[i],dp[i-j]+1);
            }
        }
    }
    if(dp[m]==1e9)cout<<-1;
    else
    cout<<dp[m];
}
