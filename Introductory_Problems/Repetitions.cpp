#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int count=1,maxi=1;
    for(long long i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count=1;
        }
        maxi = max(maxi,count);
    }
    cout<<maxi<<endl;
}
