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

    string a, b;
    int len1, len2, i, diff, count = 0, j;
    cout<<"Enter the first binary string\n";
    cin>>a>>b;

    len1 = a.length();
    len2 = b.length();

    if(len1>len2) {
        diff = len1-len2;
        for(int i=0; i<len1; i++) {
            b[i+diff] = b[i];
        }

        j = i+diff;

        b[j] = '\0';

        for(int i=0; i<diff; i++) {
            b[i] = '0';
        }
    }
    else{
        diff = len2-len1;

        for(int i=0; i<diff; i++) {
            a[i] = '0';
        }
    }

    cout<<"\nCodes are\n";
    cout<<"string 1="<<a<<"\n";
    cout<<"string 2="<<b<<"\n";

    for(int i=0; a[i]!='\0'; i++) {
        if(a[i] != b[i]){
            count++;
        }
    }

    cout<<"humming distance between "<<a<<" and "<<b<<" is "<<count<<endl;

    


return 0;
}