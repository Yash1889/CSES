#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v;
    if(n==1){
        cout<<"1"<<endl;
    }
    else if(n==2||n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==4){
        cout<<"2 4 1 3"<<endl;
    }
    else{
        for(int i=1;i<n+1;i+=2){
            v.push_back(i);
        }
        for(int i=2;i<n+1;i+=2){
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
}
