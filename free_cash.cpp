#include <bits/stdc++.h>
using namespace std;



void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


int main() {
    init_code();
    long long n, c = 0, ans = 1;
    cin>>n;
    string h, m, s; 
    map<string, int> mp;
    
    for(long long i=0; i<n; i++){
        cin>>h>>m;
        s=h+'_'+m;
        mp[s]++;
    }
    
    for(auto &x: mp){
        c = x.second;
        ans = max(ans, c);
    }
    
    cout<<ans<<endl;
    
    return 0;
}