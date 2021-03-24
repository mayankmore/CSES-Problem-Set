#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

signed main() {
	int n;
	cin>>n;
	int a = 2;
	int ans = 1;
	while(n>0){
	    if(n&1){
	        ans = (ans*a)%mod;
	    }
	    n = n>>1;
	    a = (a*a)%mod;
	}
	cout<<ans;
}
