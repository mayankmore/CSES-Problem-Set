#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	string s;
	cin>>s;
	int n = s.length();
	int ans = INT_MIN;
	for(int i=0;i<n;i++){
	    int count =1;
	    while(s[i]==s[i+1] and i<n-1){
	        count++;
	        i++;
	    }
	    ans = max(ans,count);
	}
	cout<<ans;
}
