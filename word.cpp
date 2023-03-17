#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

bool isUpper(char x){
	if(x >= 'a' && x<='z'){
		return false;
	}else{
		return true;
	}
}

int main(){
    init_code();
    

    string s;
    cin>>s;

    int upper = 0, lower = 0;

    for(int i=0; i<s.length(); i++) 
    {
    	if(isUpper(s[i])) upper++;
    	else if(!isUpper(s[i])) lower++;
    }

    if(upper > lower){
    	for(int i=0; i<s.length(); i++) {
    		s[i] = toupper(s[i]);
    	}
    }else if(lower > upper){
    	for(int i=0; i<s.length(); i++) {
    		s[i] = tolower(s[i]);
    	}
    }

    cout<<s<<endl;

return 0;
}