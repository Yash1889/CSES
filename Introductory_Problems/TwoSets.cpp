#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long sum = n*(n+1)/2;
    vector<long long> v1;
    vector<long long> v2;
    vector<long long> v;
    if(sum%2!=0){
        cout<<"NO";
    }
    else{
        long long req = sum/2;
        for(long long i=n;i>=1;i--){
            if(req>=i){
                v1.push_back(i);
                req-=i;
            }
            else{
                v2.push_back(i);
            }
        }
        cout<<"YES"<<"\n";
        cout<<v1.size()<<"\n";
        for(long long i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<"\n";
        cout<<v2.size()<<"\n";
        for(long long i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
    }
}
