  GNU nano 8.7     IntroDuctory_Problems/Weird_Algorithm.cpp *             
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    vector<long long> v;
    bool ok=1;
    while(ok){
        if(n==1){
            ok=0;
        }
        if(n%2==0){
            v.push_back(n);
            n/=2;
        }
        else{
            v.push_back(n);
            n = n*3 + 1;
        }
    }
    for(long long i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

