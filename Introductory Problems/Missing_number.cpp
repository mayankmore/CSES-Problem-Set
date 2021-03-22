#include <iostream>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin>>n;
    int sum=0;
    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        sum += a[i];
    }
    int ans = (n*(n+1)/2) - sum;
    cout<<ans;
}
