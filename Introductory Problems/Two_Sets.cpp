#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n;
	cin>>n;
	int sum = (n*(n+1))/2;
	if(sum&1){
	    cout<<"NO";
	}
	else{
	    cout<<"YES"<<endl;
	    vector<int>v1,v2;
	    int hsum = sum/2;
	    while(n){
	        if(hsum-n>=0){
	            v1.push_back(n);
	            hsum -= n;
	        }
	        else{
	            v2.push_back(n);
	        }
	        n--;
	    }
	    cout<<v1.size()<<endl;
	    for(int i=0;i<v1.size();i++){
	        cout<<v1[i]<<" ";
	    }
	    cout<<endl<<v2.size()<<endl;
	    for(int i=0;i<v2.size();i++){
	        cout<<v2[i]<<" ";
	    }
	}
}
