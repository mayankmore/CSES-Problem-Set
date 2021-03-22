#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int ans = 0;
	for(int i=1;i<n;i++){
	    int dif = a[i] - a[i-1];
	    if(dif<0){
	        ans += abs(dif);
	        a[i] += abs(dif);
	    }
	}
	cout<<ans;
}
