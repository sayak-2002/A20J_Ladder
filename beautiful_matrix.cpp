#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}



int main()
{
	init_code();
    int x = 0;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> x;
            if (x == 1) {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    return 0;
};