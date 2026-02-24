#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ll n;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0] = 1;
    ll Mod = 1e9+7;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=6;j++){
            if(i-j>=0){
                dp[i] = (dp[i]+dp[i-j])%Mod;
            }
        }
    }
    cout<<dp[n];
}
