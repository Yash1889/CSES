#include <bits/stdc++.h>
using namespace std;
 
void toh(long long n,long long from,long long to,long long aux){
    if(n==0)return;
    toh(n-1,from,aux,to);
    cout<<from<<" "<<to<<endl;
    toh(n-1,aux,to,from);
}
 
int main(){
    long long n;
    cin >> n;
    cout<<(1<<n)-1<<'\n';
    toh(n,1,3,2);
}
