#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> v;
    v.push_back(s);
    while(next_permutation(s.begin(),s.end())){
        v.push_back(s);
    }
    cout<<v.size()<<endl;
    for(auto p:v)cout<<p<<endl;
}
