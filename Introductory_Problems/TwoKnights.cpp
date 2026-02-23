#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long ans;
    for(long long i=1;i<n+1;i++){
        long long t = i*i*(i*i-1)/2;
        long long k = 4*(i-1)*(i-2);
        ans = t-k;
        cout<<ans<<endl;
    }
}
