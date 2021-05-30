#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)


void solve(){
    ll n,k;
    cin>>n>>k;
    ll in1, in2;
    vector<ll> v;
    map<ll, ll> f;
    ll i;
    ll ret = 0;

    for(i =0; i<n; i++) {
        cin>>in1>>in2;

        if (f.count(in1) > 0) {
            f.at(in1) += in2;
        } else {
            v.push_back(in1);
            f.insert(pair<ll, ll>(in1, in2));
        }
    }

    

    sort(v.begin(), v.end());

    map<ll, ll>::iterator itr;
    itr = f.begin();
    for (auto x : v) {
        if (k>=itr->first) {
            k+= f.at(x);
        }
        itr++;
    }

    cout<<k<<endl;
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