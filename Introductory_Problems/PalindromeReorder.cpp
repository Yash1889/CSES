#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto p:s){
        mp[p]++;
    }
    int count=0;
    string ans = "";
     char oddc = '\0';
    for(auto a:mp){
        if(a.second%2!=0){
            count++;
            oddc=a.first;
        }
    }
    if(count>1){
        ans = "NO SOLUTION";
    }
    else{
        for(auto a:mp){
            int temp = a.second/2;
            while(temp>0){
                ans+=a.first;
                temp--;
            }
        }
        if(oddc!='\0'){
            ans+=oddc;
        }
        string r="";
        for(auto a:mp){
            int temp = a.second/2;
            while(temp>0){
                r+=a.first;
                temp--;
            }
        }
        reverse(r.begin(), r.end());
        ans+=r;
    }
    cout<<ans<<endl;
}
