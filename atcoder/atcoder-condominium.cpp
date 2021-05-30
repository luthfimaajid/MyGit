#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    int n,k;
    ll sum= 0;
    cin>>n>>k;
    for(int i=1; i<=n; i++) {

        for(int j=1; j<=k; j++) {
            sum += (100 * i);
            sum += j;
        }
    }

    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    int n=1; 
    //cin>>n;

    for(auto i=0; i<n; i++){
        solve();
    }

    return 0;
}   