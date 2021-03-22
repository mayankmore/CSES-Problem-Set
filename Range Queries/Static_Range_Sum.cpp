#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int pre[n+1] = {0};
	for(int i=1;i<n+1;i++){
	    pre[i] = a[i-1]+pre[i-1];
	}
	int a1,b1;
	while(q--){
	    cin>>a1>>b1;
	    cout<<pre[b1]-pre[a1-1]<<endl;
	}
	
}
