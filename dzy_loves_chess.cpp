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

    int n, m;

    cin>>n>>m;

    vector<vector<char>>chess(n, vector<char>(m));

    for(int i=0; i<n; i++) {
    	for(int j=0; j<m; j++) {
    		cin>>chess[i][j];
    	}
    }

    for(int i=0; i<n; i++) {
    	for(int j=0; j<m; j++) {
    		if(chess[i][j] == '.'){
    			if((j+i)%2 == 0) chess[i][j] = 'B';
    			else chess[i][j] = 'W';
    		}
    	}
    }

    for(int i=0; i<n; i++) {
    	for(int j=0; j<m; j++) {
    		cout<<chess[i][j];
    	}
    	cout<<endl;
    }
    


return 0;
}