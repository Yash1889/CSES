#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long sum=0;
    for(long long i=0;i<n;i++){
        sum+=v[i];
    }
    cout<<n*(n+1)/2-sum<<endl;
}
