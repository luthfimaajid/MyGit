#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    ll n;
    cin>>n;
    ll in1, in2;
    vector<ll> x;
    vector<ll> y;

    for(ll i=0; i<n; i++) {
       cin>>in1>>in2;
       x.push_back(in1);
       y.push_back(in2);
    }

    vector<ll> dist;
    for(ll i=0; i<n; i++) {
        for(ll j=i+1; j<n; j++) {
            in1 = max(llabs(x[i]-x[j]), llabs(y[i]-y[j]));
            // printf("%d-%d, %d-%d\n", x[i], x[j], y[i], y[j]);
            dist.push_back(in1);
        }
    }

    sort(dist.begin(), dist.end());

    cout<<dist[dist.size()-2]<<endl;

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