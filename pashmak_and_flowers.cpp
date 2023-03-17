#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
    init_code();

    long long int n;
    cin>>n;

    vector<long long int> flowers(n);

    for(long long int i=0; i<n; i++) {
        cin>>flowers[i];
    }

    sort(flowers.begin(), flowers.end());

    long long int count = 0, count2 = 0;

    for(long long int i=0; i<n; i++) {
        if(flowers[i] == flowers[0]) count++;
        if(flowers[i] == flowers[n-1]) count2++;
    }

    if(flowers[0] - flowers[n-1] == 0) {
        cout<<flowers[n-1]-flowers[0]<<" "<<n*(n-1)/2<<endl;
    }
    else{
        cout<<flowers[n-1]-flowers[0]<<" "<<count*count2<<endl;
    }



return 0;
}