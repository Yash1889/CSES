#include <bits/stdc++.h>
using namespace std;
 
long long power(long long a,long long b,long long mod){
    long long res=1;
    a%=mod;
    while(b>0){
        if(b&1)
            res=(1LL* res*a)%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
 
 
int main(){
    long long n;
    cin>>n;
    cout<<power(2,n,1e9+7);
}
