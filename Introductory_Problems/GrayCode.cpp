#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int total = 1 << n;
    for(int i = 0; i < total; i++){
        int gray = i ^ (i >> 1);
        string s = bitset<32>(gray).to_string().substr(32 - n);
        cout << s << "\n";
    }
}
