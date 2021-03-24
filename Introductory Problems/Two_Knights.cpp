#include <bits/stdc++.h>
using namespace std;
#define int long long

int res(int n){
        int total = (n*n)*(n*n -1)/2;
	    int attack = 4*(n-1)*(n-2);
	    return (total-attack);
}

signed main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    cout<<res(i)<<endl;
	}
}
