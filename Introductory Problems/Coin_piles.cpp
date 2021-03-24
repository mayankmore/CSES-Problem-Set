#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int n = (2*a -b);
	    int m = (2*b - a);
	    if(n%3==0 and m%3==0 and n>=0 and m>=0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	
	
}
