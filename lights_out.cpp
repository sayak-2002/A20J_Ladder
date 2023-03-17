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

    

    int lights[3][3];

    for(int i=0; i<3; i++) {
    	for(int j=0; j<3; j++) {
    		cin>>lights[i][j];
    	}
    }

    for(int i=0; i<3; i++) {
    	for(int j=0; j<3; j++) {
    		if(lights[i][j]%2 == 0){
    			lights[i][j] = 1;
    			lights[i][j+1] = 1;
    			lights[i+1][j] = 1;
    			lights[i][j-1] = 1;
    			lights[i-1][j] = 1;
    		}else{
    			lights[i][j] = 0;
    			lights[i][j+1] = 0;
    			lights[i+1][j] = 0;
    			lights[i][j-1] = 0;
    			lights[i-1][j] = 0;
    		}
    	}
    }

    for(int i=0; i<3; i++) {
    	for(int j=0; j<3; j++) {
    		cout<<lights[i][j];
    	}
    	cout<<endl;
    }
    


return 0;
}